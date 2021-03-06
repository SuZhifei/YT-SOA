/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v201805221014.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/soa/com/ListenerServerStubDefault.hpp>
#include <assert.h>

namespace v1 {
namespace soa {
namespace com {

ListenerServerStubDefault::ListenerServerStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(ListenerServer::getInterfaceVersion()) {
}

const CommonAPI::Version& ListenerServerStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

ListenerServerStubRemoteEvent* ListenerServerStubDefault::initStubAdapter(const std::shared_ptr< ListenerServerStubAdapter> &_adapter) {
    CommonAPI::Stub<ListenerServerStubAdapter, ListenerServerStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}


void ListenerServerStubDefault::SayHello(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _pid, std::string _path, SayHelloReply_t _reply) {
    (void)_client;
    (void)_pid;
    (void)_path;
    _reply();
}


void ListenerServerStubDefault::fireNotifyBooleanSelective(const std::string &_path, const bool &_value, const uint64_t &_timestamp, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    sendNotifyBooleanSelective(_path, _value, _timestamp, _receivers);
}
void ListenerServerStubDefault::onNotifyBooleanSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event) {
    (void)_client;
    (void)_event;
    // No operation in default
}
bool ListenerServerStubDefault::onNotifyBooleanSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    // Accept in default
    return true;
}
void ListenerServerStubDefault::fireNotifyIntegerSelective(const std::string &_path, const int32_t &_value, const uint64_t &_timestamp, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    sendNotifyIntegerSelective(_path, _value, _timestamp, _receivers);
}
void ListenerServerStubDefault::onNotifyIntegerSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event) {
    (void)_client;
    (void)_event;
    // No operation in default
}
bool ListenerServerStubDefault::onNotifyIntegerSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    // Accept in default
    return true;
}
void ListenerServerStubDefault::fireNotifyRealSelective(const std::string &_path, const double &_value, const uint64_t &_timestamp, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    sendNotifyRealSelective(_path, _value, _timestamp, _receivers);
}
void ListenerServerStubDefault::onNotifyRealSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event) {
    (void)_client;
    (void)_event;
    // No operation in default
}
bool ListenerServerStubDefault::onNotifyRealSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    // Accept in default
    return true;
}
void ListenerServerStubDefault::fireNotifyStringSelective(const std::string &_path, const std::string &_value, const uint64_t &_timestamp, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    sendNotifyStringSelective(_path, _value, _timestamp, _receivers);
}
void ListenerServerStubDefault::onNotifyStringSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event) {
    (void)_client;
    (void)_event;
    // No operation in default
}
bool ListenerServerStubDefault::onNotifyStringSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    // Accept in default
    return true;
}
void ListenerServerStubDefault::fireNotifyEnumSelective(const std::string &_path, const int32_t &_value, const uint64_t &_timestamp, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    sendNotifyEnumSelective(_path, _value, _timestamp, _receivers);
}
void ListenerServerStubDefault::onNotifyEnumSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event) {
    (void)_client;
    (void)_event;
    // No operation in default
}
bool ListenerServerStubDefault::onNotifyEnumSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    // Accept in default
    return true;
}


ListenerServerStubDefault::RemoteEventHandler::RemoteEventHandler(ListenerServerStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace com
} // namespace soa
} // namespace v1
