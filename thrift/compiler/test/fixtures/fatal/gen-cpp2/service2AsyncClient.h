/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_B_types.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_C_types.h"
#include "thrift/test/fatal_custom_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace test_cpp2 { namespace cpp_reflection {

class service2AsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "service2";
  }


  virtual void methodA(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodA(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void methodAImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  virtual void sync_methodA();
  virtual void sync_methodA(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<folly::Unit> future_methodA();
  virtual folly::SemiFuture<folly::Unit> semifuture_methodA();
  virtual folly::Future<folly::Unit> future_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<folly::Unit> semifuture_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodA(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_methodA() {
    auto task = semifuture_methodA();
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task<void> co_methodA(apache::thrift::RpcOptions& rpcOptions) {
    auto task = semifuture_methodA(rpcOptions);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
#endif // FOLLY_HAS_COROUTINES

  virtual void methodA(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_methodA(::apache::thrift::ClientReceiveState& state);
  static void recv_methodA(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodA(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodA(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodAT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodACtx(apache::thrift::RpcOptions& rpcOptions);
 public:
  virtual void methodB(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual void methodB(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
 protected:
  void methodBImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
 public:

  virtual void sync_methodB(int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual void sync_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);

  virtual folly::Future<folly::Unit> future_methodB(int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<folly::Unit> semifuture_methodB(int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::Future<folly::Unit> future_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<folly::Unit> semifuture_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_methodB(int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    auto task = semifuture_methodB(p_x, p_y, p_z);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task<void> co_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    auto task = semifuture_methodB(rpcOptions, p_x, p_y, p_z);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
#endif // FOLLY_HAS_COROUTINES

  virtual void methodB(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);


  static folly::exception_wrapper recv_wrapped_methodB(::apache::thrift::ClientReceiveState& state);
  static void recv_methodB(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodB(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodB(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodBT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int32_t p_x, const  ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodBCtx(apache::thrift::RpcOptions& rpcOptions);
 public:
  virtual void methodC(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodC(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void methodCImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  virtual int32_t sync_methodC();
  virtual int32_t sync_methodC(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<int32_t> future_methodC();
  virtual folly::SemiFuture<int32_t> semifuture_methodC();
  virtual folly::Future<int32_t> future_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<int32_t> semifuture_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodC(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<int32_t> co_methodC() {
    auto task = semifuture_methodC();
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task<int32_t> co_methodC(apache::thrift::RpcOptions& rpcOptions) {
    auto task = semifuture_methodC(rpcOptions);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_co_methodC(apache::thrift::RpcOptions& rpcOptions) {
    auto task = header_semifuture_methodC(rpcOptions);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
#endif // FOLLY_HAS_COROUTINES

  virtual void methodC(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_methodC(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static int32_t recv_methodC(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual int32_t recv_instance_methodC(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodC(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodCT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodCCtx(apache::thrift::RpcOptions& rpcOptions);
 public:
  virtual void methodD(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual void methodD(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
 protected:
  void methodDImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
 public:

  virtual int32_t sync_methodD(int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual int32_t sync_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);

  virtual folly::Future<int32_t> future_methodD(int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<int32_t> semifuture_methodD(int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::Future<int32_t> future_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<int32_t> semifuture_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<int32_t> co_methodD(int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    auto task = semifuture_methodD(p_i, p_j, p_k);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task<int32_t> co_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    auto task = semifuture_methodD(rpcOptions, p_i, p_j, p_k);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_co_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    auto task = header_semifuture_methodD(rpcOptions, p_i, p_j, p_k);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
#endif // FOLLY_HAS_COROUTINES

  virtual void methodD(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);


  static folly::exception_wrapper recv_wrapped_methodD(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static int32_t recv_methodD(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual int32_t recv_instance_methodD(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodD(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodDT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int32_t p_i, const  ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodDCtx(apache::thrift::RpcOptions& rpcOptions);
 public:
  virtual void methodE(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodE(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void methodEImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  virtual void sync_methodE( ::test_cpp2::cpp_reflection::struct2& _return);
  virtual void sync_methodE(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct2& _return);

  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_methodE();
  virtual folly::SemiFuture< ::test_cpp2::cpp_reflection::struct2> semifuture_methodE();
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_methodE(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture< ::test_cpp2::cpp_reflection::struct2> semifuture_methodE(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodE(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodE(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task< ::test_cpp2::cpp_reflection::struct2> co_methodE() {
    auto task = semifuture_methodE();
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task< ::test_cpp2::cpp_reflection::struct2> co_methodE(apache::thrift::RpcOptions& rpcOptions) {
    auto task = semifuture_methodE(rpcOptions);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_co_methodE(apache::thrift::RpcOptions& rpcOptions) {
    auto task = header_semifuture_methodE(rpcOptions);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
#endif // FOLLY_HAS_COROUTINES

  virtual void methodE(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodET(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodECtx(apache::thrift::RpcOptions& rpcOptions);
 public:
  virtual void methodF(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual void methodF(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
 protected:
  void methodFImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
 public:

  virtual void sync_methodF( ::test_cpp2::cpp_reflection::struct2& _return, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual void sync_methodF(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct2& _return, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);

  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_methodF(int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture< ::test_cpp2::cpp_reflection::struct2> semifuture_methodF(int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture< ::test_cpp2::cpp_reflection::struct2> semifuture_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task< ::test_cpp2::cpp_reflection::struct2> co_methodF(int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    auto task = semifuture_methodF(p_l, p_m, p_n);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task< ::test_cpp2::cpp_reflection::struct2> co_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    auto task = semifuture_methodF(rpcOptions, p_l, p_m, p_n);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
  template <int = 0>
  folly::coro::Task<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_co_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    auto task = header_semifuture_methodF(rpcOptions, p_l, p_m, p_n);
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(folly::coro::detachOnCancel(std::move(task))));
    } else {
      co_yield folly::coro::co_result(co_await folly::coro::co_awaitTry(std::move(task)));
    }
  }
#endif // FOLLY_HAS_COROUTINES

  virtual void methodF(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);


  static folly::exception_wrapper recv_wrapped_methodF( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_methodF( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodF( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodF( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodFT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int32_t p_l, const  ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodFCtx(apache::thrift::RpcOptions& rpcOptions);
 public:
};

}} // test_cpp2::cpp_reflection
