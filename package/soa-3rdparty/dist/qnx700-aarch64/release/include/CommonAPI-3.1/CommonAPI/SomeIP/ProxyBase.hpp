// Copyright (C) 2014-2015 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#error "Only <CommonAPI/CommonAPI.hpp> can be included directly, this file may disappear or change contents."
#endif

#ifndef COMMONAPI_SOMEIP_PROXY_BASE_HPP_
#define COMMONAPI_SOMEIP_PROXY_BASE_HPP_

#include <functional>
#include <memory>
#include <string>
#include <mutex>

#include <CommonAPI/Export.hpp>
#include <CommonAPI/Proxy.hpp>
#include <CommonAPI/Types.hpp>
#include <CommonAPI/SomeIP/ProxyConnection.hpp>
#include <CommonAPI/SomeIP/Types.hpp>

namespace CommonAPI {
namespace SomeIP {

class Address;

class COMMONAPI_EXPORT_CLASS_EXPLICIT ProxyBase
        : public virtual CommonAPI::Proxy {
 public:
     COMMONAPI_EXPORT ProxyBase(const std::shared_ptr<ProxyConnection> &connection);
     COMMONAPI_EXPORT virtual ~ProxyBase() {};

     COMMONAPI_EXPORT virtual const Address &getSomeIpAddress() const = 0;

    inline const std::shared_ptr<ProxyConnection> & getConnection() const;

    COMMONAPI_EXPORT Message createMethodCall(const method_id_t methodId, bool _reliable) const;

    typedef std::function<void(const AvailabilityStatus, const Timeout_t remaining)> isAvailableAsyncCallback;
    COMMONAPI_EXPORT virtual std::future<AvailabilityStatus> isAvailableAsync(
            isAvailableAsyncCallback _callback,
            const CallInfo *_info) const = 0;

    COMMONAPI_EXPORT void addEventHandler(
            service_id_t serviceId,
            instance_id_t instanceId,
            eventgroup_id_t eventGroupId,
            event_id_t eventId,
            bool isField,
            std::weak_ptr<ProxyConnection::EventHandler> eventHandler,
            major_version_t major,
            bool isSelective = false);

    COMMONAPI_EXPORT void removeEventHandler(
            service_id_t serviceId,
            instance_id_t instanceId,
            eventgroup_id_t eventGroupId,
            event_id_t eventId,
            ProxyConnection::EventHandler* eventHandler,
            major_version_t major,
            minor_version_t minor);

    COMMONAPI_EXPORT virtual void getInitialEvent(
            service_id_t serviceId,
            instance_id_t instanceId,
            eventgroup_id_t eventGroupId,
            event_id_t eventId,
            major_version_t major) = 0;

    COMMONAPI_EXPORT void subscribeForSelective(
             service_id_t serviceId,
             instance_id_t instanceId,
             eventgroup_id_t eventGroupId,
             event_id_t eventId,
             std::weak_ptr<ProxyConnection::EventHandler> eventHandler,
             uint32_t _tag,
             major_version_t major);

    COMMONAPI_EXPORT void subscribeForSelective(
             service_id_t serviceId,
             instance_id_t instanceId,
             eventgroup_id_t eventGroupId,
             std::weak_ptr<ProxyConnection::EventHandler> eventHandler,
             uint32_t _tag,
             major_version_t major);

    COMMONAPI_EXPORT virtual bool init() = 0;
 protected:
    const std::string commonApiDomain_;

 private:
    ProxyBase(const ProxyBase&) = delete;

    std::shared_ptr<ProxyConnection> connection_;

    std::set<event_id_t> eventHandlerAdded_;
    std::mutex eventHandlerAddedMutex_;
};

const std::shared_ptr< ProxyConnection >& ProxyBase::getConnection() const {
    return connection_;
}

} // namespace SomeIP
} // namespace CommonAPI

#endif // COMMONAPI_SOMEIP_PROXY_BASE_HPP_
