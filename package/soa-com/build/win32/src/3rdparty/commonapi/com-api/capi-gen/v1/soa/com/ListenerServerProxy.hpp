/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v201805221014.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_SOA_COM_Listener_Server_PROXY_HPP_
#define V1_SOA_COM_Listener_Server_PROXY_HPP_

#include <v1/soa/com/ListenerServerProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace soa {
namespace com {

template <typename ... _AttributeExtensions>
class ListenerServerProxy
    : virtual public ListenerServer,
      virtual public ListenerServerProxyBase,
      virtual public _AttributeExtensions... {
public:
    ListenerServerProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~ListenerServerProxy();

    typedef ListenerServer InterfaceType;



    /**
     * Returns the wrapper class that provides access to the broadcast NotifyBoolean.
     */
    virtual NotifyBooleanSelectiveEvent& getNotifyBooleanSelectiveEvent() {
        return delegate_->getNotifyBooleanSelectiveEvent();
    }
    /**
     * Returns the wrapper class that provides access to the broadcast NotifyInteger.
     */
    virtual NotifyIntegerSelectiveEvent& getNotifyIntegerSelectiveEvent() {
        return delegate_->getNotifyIntegerSelectiveEvent();
    }
    /**
     * Returns the wrapper class that provides access to the broadcast NotifyReal.
     */
    virtual NotifyRealSelectiveEvent& getNotifyRealSelectiveEvent() {
        return delegate_->getNotifyRealSelectiveEvent();
    }
    /**
     * Returns the wrapper class that provides access to the broadcast NotifyString.
     */
    virtual NotifyStringSelectiveEvent& getNotifyStringSelectiveEvent() {
        return delegate_->getNotifyStringSelectiveEvent();
    }
    /**
     * Returns the wrapper class that provides access to the broadcast NotifyEnum.
     */
    virtual NotifyEnumSelectiveEvent& getNotifyEnumSelectiveEvent() {
        return delegate_->getNotifyEnumSelectiveEvent();
    }

    /**
     * Calls SayHello with synchronous semantics.
     *
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void SayHello(const int32_t &_pid, const std::string &_path, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls SayHello with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> SayHelloAsync(const int32_t &_pid, const std::string &_path, SayHelloAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr< ListenerServerProxyBase> delegate_;
};

typedef ListenerServerProxy<> ListenerServerProxyDefault;


//
// ListenerServerProxy Implementation
//
template <typename ... _AttributeExtensions>
ListenerServerProxy<_AttributeExtensions...>::ListenerServerProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< ListenerServerProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< ListenerServerProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
ListenerServerProxy<_AttributeExtensions...>::~ListenerServerProxy() {
}

template <typename ... _AttributeExtensions>
void ListenerServerProxy<_AttributeExtensions...>::SayHello(const int32_t &_pid, const std::string &_path, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->SayHello(_pid, _path, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ListenerServerProxy<_AttributeExtensions...>::SayHelloAsync(const int32_t &_pid, const std::string &_path, SayHelloAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->SayHelloAsync(_pid, _path, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &ListenerServerProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool ListenerServerProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool ListenerServerProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& ListenerServerProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& ListenerServerProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace com
} // namespace soa
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_SOA_COM_Listener_Server_PROXY_HPP_
