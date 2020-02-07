/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <folly/Portability.h>

#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

using namespace std;
using namespace folly;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

namespace apache {
namespace thrift {

namespace detail {
namespace ac {

[[noreturn]] void throw_app_exn(char const* const msg) {
  throw TApplicationException(msg);
}
} // namespace ac
} // namespace detail

namespace detail {
namespace ap {

template <typename ProtocolReader, typename ProtocolWriter>
IOBufQueue helper<ProtocolReader, ProtocolWriter>::write_exn(
    const char* method,
    ProtocolWriter* prot,
    int32_t protoSeqId,
    ContextStack* ctx,
    const TApplicationException& x) {
  IOBufQueue queue(IOBufQueue::cacheChainLength());
  size_t bufSize = detail::serializedExceptionBodySizeZC(prot, &x);
  bufSize += prot->serializedMessageSize(method);
  prot->setOutput(&queue, bufSize);
  if (ctx) {
    ctx->handlerErrorWrapped(exception_wrapper(x));
  }
  prot->writeMessageBegin(method, T_EXCEPTION, protoSeqId);
  detail::serializeExceptionBody(prot, &x);
  prot->writeMessageEnd();
  return queue;
}

template <typename ProtocolReader, typename ProtocolWriter>
void helper<ProtocolReader, ProtocolWriter>::process_exn(
    const char* func,
    const TApplicationException::TApplicationExceptionType type,
    const string& msg,
    ResponseChannelRequest::UniquePtr req,
    Cpp2RequestContext* ctx,
    EventBase* eb,
    int32_t protoSeqId) {
  ProtocolWriter oprot;
  if (req) {
    LOG(ERROR) << msg << " in function " << func;
    TApplicationException x(type, msg);
    IOBufQueue queue = helper_w<ProtocolWriter>::write_exn(
        func, &oprot, protoSeqId, nullptr, x);
    queue.append(THeader::transform(
        queue.move(),
        ctx->getHeader()->getWriteTransforms(),
        ctx->getHeader()->getMinCompressBytes()));
    eb->runInEventBaseThread(
        [que = move(queue), request = move(req)]() mutable {
          if (request->isStream()) {
            request->sendStreamReply(
                {que.move(), SemiStream<std::unique_ptr<folly::IOBuf>>{}});
          } else if (request->isSink()) {
#if FOLLY_HAS_COROUTINES
            request->sendSinkReply(que.move(), {});
#else
            DCHECK(false);
#endif
          } else {
            request->sendReply(que.move());
          }
        });
  } else {
    LOG(ERROR) << msg << " in oneway function " << func;
  }
}

template struct helper<BinaryProtocolReader, BinaryProtocolWriter>;
template struct helper<CompactProtocolReader, CompactProtocolWriter>;

template <typename ProtocolReader>
static bool setupRequestContextWithMessageBegin(
    const MessageBegin& msgBegin,
    ResponseChannelRequest::UniquePtr& req,
    Cpp2RequestContext* ctx,
    folly::EventBase* eb) {
  using h = helper_r<ProtocolReader>;
  const char* fn = "process";
  if (msgBegin.isValid) {
    ctx->setMessageBeginSize(msgBegin.size);
  } else {
    LOG(ERROR) << "received invalid message from client: "
               << msgBegin.errMessage;
    auto type = TApplicationException::TApplicationExceptionType::UNKNOWN;
    const char* msg = "invalid message from client";
    h::process_exn(fn, type, msg, std::move(req), ctx, eb, msgBegin.seqId);
    return false;
  }
  if (msgBegin.msgType != T_CALL && msgBegin.msgType != T_ONEWAY) {
    LOG(ERROR) << "received invalid message of type " << msgBegin.msgType;
    auto type =
        TApplicationException::TApplicationExceptionType::INVALID_MESSAGE_TYPE;
    const char* msg = "invalid message arguments";
    h::process_exn(fn, type, msg, std::move(req), ctx, eb, msgBegin.seqId);
    return false;
  }

  ctx->setMethodName(msgBegin.methodName);
  ctx->setProtoSeqId(msgBegin.seqId);
  return true;
}

bool setupRequestContextWithMessageBegin(
    const MessageBegin& msgBegin,
    protocol::PROTOCOL_TYPES protType,
    ResponseChannelRequest::UniquePtr& req,
    Cpp2RequestContext* ctx,
    folly::EventBase* eb) {
  switch (protType) {
    case protocol::T_BINARY_PROTOCOL:
      return setupRequestContextWithMessageBegin<BinaryProtocolReader>(
          msgBegin, req, ctx, eb);
    case protocol::T_COMPACT_PROTOCOL:
      return setupRequestContextWithMessageBegin<CompactProtocolReader>(
          msgBegin, req, ctx, eb);
    default:
      LOG(ERROR) << "invalid protType: " << folly::to_underlying(protType);
      return false;
  }
}

MessageBegin deserializeMessageBegin(
    const folly::IOBuf& buf,
    protocol::PROTOCOL_TYPES protType) {
  MessageBegin msgBegin;
  try {
    switch (protType) {
      case protocol::T_COMPACT_PROTOCOL: {
        CompactProtocolReader iprot;
        iprot.setInput(&buf);
        iprot.readMessageBegin(
            msgBegin.methodName, msgBegin.msgType, msgBegin.seqId);
        msgBegin.size = iprot.getCursorPosition();
        break;
      }
      case protocol::T_BINARY_PROTOCOL: {
        BinaryProtocolReader iprot;
        iprot.setInput(&buf);
        iprot.readMessageBegin(
            msgBegin.methodName, msgBegin.msgType, msgBegin.seqId);
        msgBegin.size = iprot.getCursorPosition();
        break;
      }
      default:
        break;
    }
  } catch (const TException& ex) {
    msgBegin.isValid = false;
    msgBegin.errMessage = ex.what();
    LOG(ERROR) << "received invalid message from client: " << ex.what();
  }
  return msgBegin;
}

template <class ProtocolReader>
static bool is_oneway_method(
    const IOBuf* buf,
    const unordered_set<string>& oneways) {
  string fname;
  MessageType mtype;
  int32_t protoSeqId = 0;
  ProtocolReader iprot;
  iprot.setInput(buf);
  try {
    iprot.readMessageBegin(fname, mtype, protoSeqId);
    auto it = oneways.find(fname);
    return it != oneways.end();
  } catch (const TException& ex) {
    LOG(ERROR) << "received invalid message from client: " << ex.what();
    return false;
  }
}

bool is_oneway_method(
    const IOBuf* buf,
    const THeader* header,
    const unordered_set<string>& oneways) {
  auto protType = static_cast<PROTOCOL_TYPES>(header->getProtocolId());
  switch (protType) {
    case T_BINARY_PROTOCOL:
      return is_oneway_method<BinaryProtocolReader>(buf, oneways);
    case T_COMPACT_PROTOCOL:
      return is_oneway_method<CompactProtocolReader>(buf, oneways);
    default:
      LOG(ERROR) << "invalid protType: " << folly::to_underlying(protType);
      return false;
  }
}

} // namespace ap
} // namespace detail

namespace detail {
namespace si {
[[noreturn]] void throw_app_exn_unimplemented(char const* const name) {
  throw TApplicationException(
      fmt::format("Function {} is unimplemented", name));
}
} // namespace si
} // namespace detail

} // namespace thrift
} // namespace apache
