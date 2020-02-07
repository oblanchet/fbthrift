/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/sink-client-buffered-stream/gen-cpp2/SinkService.h"
#include "thrift/compiler/test/fixtures/sink-client-buffered-stream/gen-cpp2/SinkService.tcc"

#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> SinkServiceSvIf::getProcessor() {
  return std::make_unique<SinkServiceAsyncProcessor>(this);
}

apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvIf::method() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method");
}

folly::SemiFuture<apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse>> SinkServiceSvIf::semifuture_method() {
  return apache::thrift::detail::si::semifuture([&] { return method(); });
}

folly::Future<apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse>> SinkServiceSvIf::future_method() {
  return apache::thrift::detail::si::future(semifuture_method(), getThreadManager());
}


void SinkServiceSvIf::async_tm_method(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_method(); });
}

apache::thrift::ResponseAndSinkConsumer< ::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvIf::methodAndReponse() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodAndReponse");
}

folly::SemiFuture<apache::thrift::ResponseAndSinkConsumer< ::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>> SinkServiceSvIf::semifuture_methodAndReponse() {
  return apache::thrift::detail::si::semifuture([&] { return methodAndReponse(); });
}

folly::Future<apache::thrift::ResponseAndSinkConsumer< ::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>> SinkServiceSvIf::future_methodAndReponse() {
  return apache::thrift::detail::si::future(semifuture_methodAndReponse(), getThreadManager());
}


void SinkServiceSvIf::async_tm_methodAndReponse(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ResponseAndSinkConsumer< ::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodAndReponse(); });
}

apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvIf::methodThrow() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodThrow");
}

folly::SemiFuture<apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse>> SinkServiceSvIf::semifuture_methodThrow() {
  return apache::thrift::detail::si::semifuture([&] { return methodThrow(); });
}

folly::Future<apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse>> SinkServiceSvIf::future_methodThrow() {
  return apache::thrift::detail::si::future(semifuture_methodThrow(), getThreadManager());
}


void SinkServiceSvIf::async_tm_methodThrow(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodThrow(); });
}

apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::method() {
  return {};
}

apache::thrift::ResponseAndSinkConsumer< ::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::methodAndReponse() {
  return {};
}

apache::thrift::SinkConsumer< ::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::methodThrow() {
  return {};
}

const char* SinkServiceAsyncProcessor::getServiceName() {
  return "SinkService";
}

void SinkServiceAsyncProcessor::process(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool SinkServiceAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::shared_ptr<folly::RequestContext> SinkServiceAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

std::unordered_set<std::string> SinkServiceAsyncProcessor::onewayMethods_ {};
const SinkServiceAsyncProcessor::ProcessMap& SinkServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const SinkServiceAsyncProcessor::ProcessMap SinkServiceAsyncProcessor::binaryProcessMap_ {
  {"method", &SinkServiceAsyncProcessor::_processInThread_method<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"methodAndReponse", &SinkServiceAsyncProcessor::_processInThread_methodAndReponse<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"methodThrow", &SinkServiceAsyncProcessor::_processInThread_methodThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const SinkServiceAsyncProcessor::ProcessMap& SinkServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const SinkServiceAsyncProcessor::ProcessMap SinkServiceAsyncProcessor::compactProcessMap_ {
  {"method", &SinkServiceAsyncProcessor::_processInThread_method<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"methodAndReponse", &SinkServiceAsyncProcessor::_processInThread_methodAndReponse<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"methodThrow", &SinkServiceAsyncProcessor::_processInThread_methodThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
