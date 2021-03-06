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

#include <thrift/lib/cpp/ContextStack.h>

#include <folly/tracing/StaticTracepoint.h>

namespace apache {
namespace thrift {

ContextStack::ContextStack(
    const std::shared_ptr<std::vector<std::shared_ptr<TProcessorEventHandler>>>&
        handlers,
    const char* method,
    TConnectionContext* connectionContext)
    : handlers_(handlers), serviceName_(""), method_(method) {
  CHECK(handlers_ && !handlers_->empty());
  for (size_t i = 0; i < handlers_->size(); ++i) {
    contextAt(i) = (*handlers_)[i]->getContext(method_, connectionContext);
  }
}

ContextStack::ContextStack(
    const std::shared_ptr<std::vector<std::shared_ptr<TProcessorEventHandler>>>&
        handlers,
    const char* serviceName,
    const char* method,
    TConnectionContext* connectionContext)
    : handlers_(handlers), serviceName_(serviceName), method_(method) {
  CHECK(handlers_ && !handlers_->empty());
  for (size_t i = 0; i < handlers_->size(); ++i) {
    contextAt(i) = (*handlers_)[i]->getServiceContext(
        serviceName_, method_, connectionContext);
  }
}

ContextStack::~ContextStack() {
  for (size_t i = 0; i < handlers_->size(); i++) {
    (*handlers_)[i]->freeContext(contextAt(i), method_);
  }
}

std::unique_ptr<ContextStack> ContextStack::create(
    const std::shared_ptr<std::vector<std::shared_ptr<TProcessorEventHandler>>>&
        handlers,
    const char* method,
    TConnectionContext* connectionContext) {
  if (!handlers || handlers->empty()) {
    return {};
  }

  const size_t nbytes = sizeof(ContextStack) + handlers->size() * sizeof(void*);
  auto* storage = static_cast<ContextStack*>(operator new (
      nbytes, std::align_val_t{alignof(ContextStack)}));
  auto* object =
      new (storage) ContextStack(handlers, method, connectionContext);

  return std::unique_ptr<ContextStack>(object);
}

std::unique_ptr<ContextStack> ContextStack::create(
    const std::shared_ptr<std::vector<std::shared_ptr<TProcessorEventHandler>>>&
        handlers,
    const char* serviceName,
    const char* method,
    TConnectionContext* connectionContext) {
  if (!handlers || handlers->empty()) {
    return {};
  }

  const size_t nbytes = sizeof(ContextStack) + handlers->size() * sizeof(void*);
  auto* storage = static_cast<ContextStack*>(operator new (
      nbytes, std::align_val_t{alignof(ContextStack)}));
  auto* object = new (storage)
      ContextStack(handlers, serviceName, method, connectionContext);

  return std::unique_ptr<ContextStack>(object);
}

void ContextStack::preWrite() {
  FOLLY_SDT(thrift, thrift_context_stack_pre_write, serviceName_, method_);

  if (handlers_) {
    for (size_t i = 0; i < handlers_->size(); i++) {
      (*handlers_)[i]->preWrite(contextAt(i), method_);
    }
  }
}

void ContextStack::onWriteData(const SerializedMessage& msg) {
  FOLLY_SDT(thrift, thrift_context_stack_on_write_data, serviceName_, method_);

  for (size_t i = 0; i < handlers_->size(); i++) {
    (*handlers_)[i]->onWriteData(contextAt(i), method_, msg);
  }
}

void ContextStack::postWrite(uint32_t bytes) {
  FOLLY_SDT(
      thrift, thrift_context_stack_post_write, serviceName_, method_, bytes);

  for (size_t i = 0; i < handlers_->size(); i++) {
    (*handlers_)[i]->postWrite(contextAt(i), method_, bytes);
  }
}

void ContextStack::preRead() {
  FOLLY_SDT(thrift, thrift_context_stack_pre_read, serviceName_, method_);

  for (size_t i = 0; i < handlers_->size(); i++) {
    (*handlers_)[i]->preRead(contextAt(i), method_);
  }
}

void ContextStack::onReadData(const SerializedMessage& msg) {
  FOLLY_SDT(thrift, thrift_context_stack_on_read_data, serviceName_, method_);

  for (size_t i = 0; i < handlers_->size(); i++) {
    (*handlers_)[i]->onReadData(contextAt(i), method_, msg);
  }
}

void ContextStack::postRead(
    apache::thrift::transport::THeader* header, uint32_t bytes) {
  FOLLY_SDT(
      thrift, thrift_context_stack_post_read, serviceName_, method_, bytes);

  for (size_t i = 0; i < handlers_->size(); i++) {
    (*handlers_)[i]->postRead(contextAt(i), method_, header, bytes);
  }
}

void ContextStack::handlerErrorWrapped(const folly::exception_wrapper& ew) {
  FOLLY_SDT(
      thrift,
      thrift_context_stack_handler_error_wrapped,
      serviceName_,
      method_);

  for (size_t i = 0; i < handlers_->size(); i++) {
    (*handlers_)[i]->handlerErrorWrapped(contextAt(i), method_, ew);
  }
}

void ContextStack::userExceptionWrapped(
    bool declared, const folly::exception_wrapper& ew) {
  FOLLY_SDT(
      thrift,
      thrift_context_stack_user_exception_wrapped,
      serviceName_,
      method_);

  for (size_t i = 0; i < handlers_->size(); i++) {
    (*handlers_)[i]->userExceptionWrapped(contextAt(i), method_, declared, ew);
  }
}

} // namespace thrift
} // namespace apache
