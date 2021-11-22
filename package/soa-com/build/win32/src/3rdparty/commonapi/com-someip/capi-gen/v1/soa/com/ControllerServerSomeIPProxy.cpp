/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201801251434.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/soa/com/ControllerServerSomeIPProxy.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace soa {
namespace com {

std::shared_ptr<CommonAPI::SomeIP::Proxy> createControllerServerSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection) {
    return std::make_shared< ControllerServerSomeIPProxy>(_address, _connection);
}

void initializeControllerServerSomeIPProxy() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:soa.com.ControllerServer:v1_0:soa.com.controller",
        0x15f90, 0x16378, 1, 0);
     CommonAPI::SomeIP::Factory::get()->registerProxyCreateMethod(
         ControllerServer::getInterface(),
         &createControllerServerSomeIPProxy);
}

INITIALIZER(registerControllerServerSomeIPProxy) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeControllerServerSomeIPProxy);
}

ControllerServerSomeIPProxy::ControllerServerSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection)
        : CommonAPI::SomeIP::Proxy(_address, _connection )
    {
    }



        void ControllerServerSomeIPProxy::SetBoolean(const std::string &_path, const bool &_value, const uint64_t &_timestamp, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
            CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
            CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment> deploy_value(_value, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
            CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
            CommonAPI::SomeIP::ProxyHelper<
                CommonAPI::SomeIP::SerializableArguments<
                    CommonAPI::Deployable<
                        std::string,
                        CommonAPI::SomeIP::StringDeployment
                    >,
                    CommonAPI::Deployable<
                        bool,
                        CommonAPI::EmptyDeployment
                    >,
                    CommonAPI::Deployable<
                        uint64_t,
                        CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                    >
                >,
                CommonAPI::SomeIP::SerializableArguments<
                >
            >::callMethodWithReply(
            *this,
            CommonAPI::SomeIP::method_id_t(0x1),
            true,
            false,
    (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
    deploy_path, deploy_value, deploy_timestamp,
    _internalCallStatus);
    }
    std::future<CommonAPI::CallStatus> ControllerServerSomeIPProxy::SetBooleanAsync(const std::string &_path, const bool &_value, const uint64_t &_timestamp, SetBooleanAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
        CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment> deploy_value(_value, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
        return CommonAPI::SomeIP::ProxyHelper<
            CommonAPI::SomeIP::SerializableArguments<
                CommonAPI::Deployable<
                    std::string,
                    CommonAPI::SomeIP::StringDeployment
                >,
                CommonAPI::Deployable<
                    bool,
                    CommonAPI::EmptyDeployment
                >,
                CommonAPI::Deployable<
                    uint64_t,
                    CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                >
            >,
            CommonAPI::SomeIP::SerializableArguments<
            >
        >::callMethodAsync(
            *this,
            CommonAPI::SomeIP::method_id_t(0x1),
            true,
            false,
            (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
            deploy_path, deploy_value, deploy_timestamp,
            [_callback] (CommonAPI::CallStatus _internalCallStatus) {
                if (_callback)
                    _callback(_internalCallStatus);
            },
            std::make_tuple());
    }
        void ControllerServerSomeIPProxy::SetInteger(const std::string &_path, const int32_t &_value, const uint64_t &_timestamp, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
            CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
            CommonAPI::Deployable< int32_t, CommonAPI::SomeIP::IntegerDeployment<int32_t>> deploy_value(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<int32_t>* >(nullptr));
            CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
            CommonAPI::SomeIP::ProxyHelper<
                CommonAPI::SomeIP::SerializableArguments<
                    CommonAPI::Deployable<
                        std::string,
                        CommonAPI::SomeIP::StringDeployment
                    >,
                    CommonAPI::Deployable<
                        int32_t,
                        CommonAPI::SomeIP::IntegerDeployment<int32_t>
                    >,
                    CommonAPI::Deployable<
                        uint64_t,
                        CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                    >
                >,
                CommonAPI::SomeIP::SerializableArguments<
                >
            >::callMethodWithReply(
            *this,
            CommonAPI::SomeIP::method_id_t(0x2),
            true,
            false,
    (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
    deploy_path, deploy_value, deploy_timestamp,
    _internalCallStatus);
    }
    std::future<CommonAPI::CallStatus> ControllerServerSomeIPProxy::SetIntegerAsync(const std::string &_path, const int32_t &_value, const uint64_t &_timestamp, SetIntegerAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
        CommonAPI::Deployable< int32_t, CommonAPI::SomeIP::IntegerDeployment<int32_t>> deploy_value(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<int32_t>* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
        return CommonAPI::SomeIP::ProxyHelper<
            CommonAPI::SomeIP::SerializableArguments<
                CommonAPI::Deployable<
                    std::string,
                    CommonAPI::SomeIP::StringDeployment
                >,
                CommonAPI::Deployable<
                    int32_t,
                    CommonAPI::SomeIP::IntegerDeployment<int32_t>
                >,
                CommonAPI::Deployable<
                    uint64_t,
                    CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                >
            >,
            CommonAPI::SomeIP::SerializableArguments<
            >
        >::callMethodAsync(
            *this,
            CommonAPI::SomeIP::method_id_t(0x2),
            true,
            false,
            (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
            deploy_path, deploy_value, deploy_timestamp,
            [_callback] (CommonAPI::CallStatus _internalCallStatus) {
                if (_callback)
                    _callback(_internalCallStatus);
            },
            std::make_tuple());
    }
        void ControllerServerSomeIPProxy::SetReal(const std::string &_path, const double &_value, const uint64_t &_timestamp, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
            CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
            CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_value(_value, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
            CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
            CommonAPI::SomeIP::ProxyHelper<
                CommonAPI::SomeIP::SerializableArguments<
                    CommonAPI::Deployable<
                        std::string,
                        CommonAPI::SomeIP::StringDeployment
                    >,
                    CommonAPI::Deployable<
                        double,
                        CommonAPI::EmptyDeployment
                    >,
                    CommonAPI::Deployable<
                        uint64_t,
                        CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                    >
                >,
                CommonAPI::SomeIP::SerializableArguments<
                >
            >::callMethodWithReply(
            *this,
            CommonAPI::SomeIP::method_id_t(0x3),
            true,
            false,
    (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
    deploy_path, deploy_value, deploy_timestamp,
    _internalCallStatus);
    }
    std::future<CommonAPI::CallStatus> ControllerServerSomeIPProxy::SetRealAsync(const std::string &_path, const double &_value, const uint64_t &_timestamp, SetRealAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
        CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_value(_value, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
        return CommonAPI::SomeIP::ProxyHelper<
            CommonAPI::SomeIP::SerializableArguments<
                CommonAPI::Deployable<
                    std::string,
                    CommonAPI::SomeIP::StringDeployment
                >,
                CommonAPI::Deployable<
                    double,
                    CommonAPI::EmptyDeployment
                >,
                CommonAPI::Deployable<
                    uint64_t,
                    CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                >
            >,
            CommonAPI::SomeIP::SerializableArguments<
            >
        >::callMethodAsync(
            *this,
            CommonAPI::SomeIP::method_id_t(0x3),
            true,
            false,
            (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
            deploy_path, deploy_value, deploy_timestamp,
            [_callback] (CommonAPI::CallStatus _internalCallStatus) {
                if (_callback)
                    _callback(_internalCallStatus);
            },
            std::make_tuple());
    }
        void ControllerServerSomeIPProxy::SetString(const std::string &_path, const std::string &_value, const uint64_t &_timestamp, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
            CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
            CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_value(_value, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
            CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
            CommonAPI::SomeIP::ProxyHelper<
                CommonAPI::SomeIP::SerializableArguments<
                    CommonAPI::Deployable<
                        std::string,
                        CommonAPI::SomeIP::StringDeployment
                    >,
                    CommonAPI::Deployable<
                        std::string,
                        CommonAPI::SomeIP::StringDeployment
                    >,
                    CommonAPI::Deployable<
                        uint64_t,
                        CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                    >
                >,
                CommonAPI::SomeIP::SerializableArguments<
                >
            >::callMethodWithReply(
            *this,
            CommonAPI::SomeIP::method_id_t(0x4),
            true,
            false,
    (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
    deploy_path, deploy_value, deploy_timestamp,
    _internalCallStatus);
    }
    std::future<CommonAPI::CallStatus> ControllerServerSomeIPProxy::SetStringAsync(const std::string &_path, const std::string &_value, const uint64_t &_timestamp, SetStringAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
        CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_value(_value, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
        return CommonAPI::SomeIP::ProxyHelper<
            CommonAPI::SomeIP::SerializableArguments<
                CommonAPI::Deployable<
                    std::string,
                    CommonAPI::SomeIP::StringDeployment
                >,
                CommonAPI::Deployable<
                    std::string,
                    CommonAPI::SomeIP::StringDeployment
                >,
                CommonAPI::Deployable<
                    uint64_t,
                    CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                >
            >,
            CommonAPI::SomeIP::SerializableArguments<
            >
        >::callMethodAsync(
            *this,
            CommonAPI::SomeIP::method_id_t(0x4),
            true,
            false,
            (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
            deploy_path, deploy_value, deploy_timestamp,
            [_callback] (CommonAPI::CallStatus _internalCallStatus) {
                if (_callback)
                    _callback(_internalCallStatus);
            },
            std::make_tuple());
    }
        void ControllerServerSomeIPProxy::SetEnum(const std::string &_path, const int32_t &_value, const uint64_t &_timestamp, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
            CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
            CommonAPI::Deployable< int32_t, CommonAPI::SomeIP::IntegerDeployment<int32_t>> deploy_value(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<int32_t>* >(nullptr));
            CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
            CommonAPI::SomeIP::ProxyHelper<
                CommonAPI::SomeIP::SerializableArguments<
                    CommonAPI::Deployable<
                        std::string,
                        CommonAPI::SomeIP::StringDeployment
                    >,
                    CommonAPI::Deployable<
                        int32_t,
                        CommonAPI::SomeIP::IntegerDeployment<int32_t>
                    >,
                    CommonAPI::Deployable<
                        uint64_t,
                        CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                    >
                >,
                CommonAPI::SomeIP::SerializableArguments<
                >
            >::callMethodWithReply(
            *this,
            CommonAPI::SomeIP::method_id_t(0x5),
            true,
            false,
    (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
    deploy_path, deploy_value, deploy_timestamp,
    _internalCallStatus);
    }
    std::future<CommonAPI::CallStatus> ControllerServerSomeIPProxy::SetEnumAsync(const std::string &_path, const int32_t &_value, const uint64_t &_timestamp, SetEnumAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_path(_path, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
        CommonAPI::Deployable< int32_t, CommonAPI::SomeIP::IntegerDeployment<int32_t>> deploy_value(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<int32_t>* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::SomeIP::IntegerDeployment<uint64_t>> deploy_timestamp(_timestamp, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr));
        return CommonAPI::SomeIP::ProxyHelper<
            CommonAPI::SomeIP::SerializableArguments<
                CommonAPI::Deployable<
                    std::string,
                    CommonAPI::SomeIP::StringDeployment
                >,
                CommonAPI::Deployable<
                    int32_t,
                    CommonAPI::SomeIP::IntegerDeployment<int32_t>
                >,
                CommonAPI::Deployable<
                    uint64_t,
                    CommonAPI::SomeIP::IntegerDeployment<uint64_t>
                >
            >,
            CommonAPI::SomeIP::SerializableArguments<
            >
        >::callMethodAsync(
            *this,
            CommonAPI::SomeIP::method_id_t(0x5),
            true,
            false,
            (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
            deploy_path, deploy_value, deploy_timestamp,
            [_callback] (CommonAPI::CallStatus _internalCallStatus) {
                if (_callback)
                    _callback(_internalCallStatus);
            },
            std::make_tuple());
    }



    void ControllerServerSomeIPProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
    }

} // namespace com
} // namespace soa
} // namespace v1
