/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201801251434.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_SOA_COM_LISTENER_SERVER_SOMEIP_PROXY_HPP_
#define V1_SOA_COM_LISTENER_SERVER_SOMEIP_PROXY_HPP_

#include <v1/soa/com/ListenerServerProxyBase.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Proxy.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Event.hpp>
#include <CommonAPI/Types.hpp>
#include <CommonAPI/SomeIP/SelectiveEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v1 {
namespace soa {
namespace com {

class ListenerServerSomeIPProxy
    : virtual public ListenerServerProxyBase,
    virtual public CommonAPI::SomeIP::Proxy {
public:
    ListenerServerSomeIPProxy(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection);

    virtual ~ListenerServerSomeIPProxy() { }


    virtual NotifyBooleanSelectiveEvent& getNotifyBooleanSelectiveEvent();
    virtual NotifyIntegerSelectiveEvent& getNotifyIntegerSelectiveEvent();
    virtual NotifyRealSelectiveEvent& getNotifyRealSelectiveEvent();
    virtual NotifyStringSelectiveEvent& getNotifyStringSelectiveEvent();
    virtual NotifyEnumSelectiveEvent& getNotifyEnumSelectiveEvent();

    virtual void SayHello(const int32_t &_pid, const std::string &_path, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> SayHelloAsync(const int32_t &_pid, const std::string &_path, SayHelloAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t &_major, uint16_t &_minor) const;

private:


     CommonAPI::SomeIP::SelectiveEvent<NotifyBooleanSelectiveEvent, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t> >> notifyBooleanSelective_;
     CommonAPI::SomeIP::SelectiveEvent<NotifyIntegerSelectiveEvent, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< int32_t, CommonAPI::SomeIP::IntegerDeployment<int32_t> >, CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t> >> notifyIntegerSelective_;
     CommonAPI::SomeIP::SelectiveEvent<NotifyRealSelectiveEvent, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< double, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t> >> notifyRealSelective_;
     CommonAPI::SomeIP::SelectiveEvent<NotifyStringSelectiveEvent, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t> >> notifyStringSelective_;
     CommonAPI::SomeIP::SelectiveEvent<NotifyEnumSelectiveEvent, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< int32_t, CommonAPI::SomeIP::IntegerDeployment<int32_t> >, CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t> >> notifyEnumSelective_;

};

} // namespace com
} // namespace soa
} // namespace v1

#endif // V1_SOA_COM_Listener_Server_SOMEIP_PROXY_HPP_
