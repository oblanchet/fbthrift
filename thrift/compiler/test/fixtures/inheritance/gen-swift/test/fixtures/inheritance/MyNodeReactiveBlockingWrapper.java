/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.inheritance;

import java.util.*;

public class MyNodeReactiveBlockingWrapper  extends test.fixtures.inheritance.MyRootReactiveBlockingWrapper
  implements MyNode {
  private final MyNode.Reactive _delegate;

  public MyNodeReactiveBlockingWrapper(MyNode.Reactive _delegate) {
    super(_delegate);
    this._delegate = _delegate;
  }

  public MyNodeReactiveBlockingWrapper(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.swift.transport.client.RpcClient> _rpcClient, Map<String, String> _headers, Map<String, String> _persistentHeaders) {
    this(new MyNodeReactiveClient(_protocolId, _rpcClient, _headers, _persistentHeaders));
  }

  @java.lang.Override
  public void close() {
    _delegate.dispose();
  }

  @java.lang.Override
  public void doMid() throws org.apache.thrift.TException {
      _delegate.doMid().block();
  }

  @java.lang.Override
  public void doMid(
        com.facebook.swift.transport.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      _delegate.doMid().block();
  }

  @java.lang.Override
  public com.facebook.swift.transport.client.ResponseWrapper<Void> doMidWrapper(
    com.facebook.swift.transport.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.doMidWrapper(rpcOptions).block();
  }

}
