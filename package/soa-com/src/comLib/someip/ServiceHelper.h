#pragma once
#include <memory>
#include <CommonAPI/CommonAPI.hpp>
#include <soa/core/Log.h>
#include <soa/core/Runtime.h>
#include <cassert>

#define COM_SERVICE_HELPER_LOG_TAG		            "COM|serviceHelper"
#define COMMONAPI_CONFIG_ENV						std::string("COMMONAPI_CONFIG=" + soa::Runtime::getEtcDirectory() + "commonapi.ini").data()
#define VSOMEIP_CONFIGURATION_ENV					std::string("VSOMEIP_CONFIGURATION=" + soa::Runtime::getEtcDirectory() + "vsomeip-screenservice.json").data()

namespace soa { namespace com{

	static void initEnv()
	{
		auto commonapi_ini = getenv("COMMONAPI_CONFIG");
		auto vsomeip_json = getenv("VSOMEIP_CONFIGURATION");
		if (!commonapi_ini)
			putenv((char *)(COMMONAPI_CONFIG_ENV));
		if (!vsomeip_json)
			putenv((char *)(VSOMEIP_CONFIGURATION_ENV));
	}

/* Proxy Helper */
template<template<typename ...> class Proxy_, typename ... Attr_>
std::shared_ptr<Proxy_<Attr_...>> buildProxy(std::string _instance) {
	CommonAPI::Runtime::setProperty("LibraryBase", "soa.com");
	std::shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();

	std::string _connection = std::string("proxy.") + _instance;

	auto proxy = runtime->buildProxy<Proxy_, Attr_...>("local", _instance, _connection);

	if (!proxy) {
		Log::error(COM_SERVICE_HELPER_LOG_TAG, "buildProxy() - %s null!", _instance.c_str());
	}

	return proxy;
}

template<template<typename ...> class Proxy_, typename ... Attr_>
bool waitProxy(std::shared_ptr<Proxy_<Attr_...>>& _proxy,
	int32_t _timeout = 5000,
	int32_t _strip = 10) {
	assert(_strip);

	if (!_proxy) {
		return false;
	}

	int32_t _timeout_orig = _timeout;
	while (!_proxy->isAvailable()) {
		if (_timeout == 0) {
			Log::error(COM_SERVICE_HELPER_LOG_TAG, "waitProxy() - %s timeout for %d ms!", _proxy->getInterface(), _timeout_orig);
			return false;
		}

		if (_timeout > 0 && _timeout < _strip)
			_strip = _timeout;

		std::this_thread::sleep_for(std::chrono::milliseconds(_strip));

		if (_timeout >= _strip)
			_timeout -= _strip;
	}

	Log::info(COM_SERVICE_HELPER_LOG_TAG, "waitProxy() - wait %s successfully for %d ms.", _proxy->getInterface(), _timeout_orig - _timeout);
	return true;
}

/* Stub Helper */
template<typename Stub_>
bool registerService(std::shared_ptr<Stub_> _service,
	std::string _instance,
	int32_t _timeout = -1,
	int32_t _strip = 2000) {
	assert(_strip);

	std::shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();

	std::string _connection = std::string("service.") + _instance;

	while (!runtime->registerService("local", _instance, _service, _connection)) {
		if (_timeout == 0) {
			Log::error(COM_SERVICE_HELPER_LOG_TAG, "registerService() - %s timeout!", _instance.c_str());
			return false;
		}

		if (_timeout > 0 && _timeout < _strip)
			_strip = _timeout;

		std::this_thread::sleep_for(std::chrono::milliseconds(_strip));
		Log::info(COM_SERVICE_HELPER_LOG_TAG, "%s is registering .....", _instance.c_str());

	}

	Log::info(COM_SERVICE_HELPER_LOG_TAG, "registerService() - %s successfully.", _instance.c_str());
	return true;
}

static void onCallErrorCallback(const CommonAPI::CallStatus &callStatus, const std::string &funcName)
{
	switch (callStatus)
	{
	case CommonAPI::CallStatus::SUCCESS:				break;
	case CommonAPI::CallStatus::OUT_OF_MEMORY:			Log::error(COM_SERVICE_HELPER_LOG_TAG, "proxy call [%s] error, out_of_memory.", funcName.data());							break;
	case CommonAPI::CallStatus::CONNECTION_FAILED:		Log::error(COM_SERVICE_HELPER_LOG_TAG, "proxy call [%s] error, connection_failed.", funcName.data());						break;
	case CommonAPI::CallStatus::NOT_AVAILABLE:			Log::error(COM_SERVICE_HELPER_LOG_TAG, "proxy call [%s] error, not_available, maybe model is dead.", funcName.data());		break;
	case CommonAPI::CallStatus::REMOTE_ERROR:			Log::error(COM_SERVICE_HELPER_LOG_TAG, "proxy call [%s] error, remote_error, maybe model is too busy.", funcName.data());	break;
	case CommonAPI::CallStatus::INVALID_VALUE:			Log::error(COM_SERVICE_HELPER_LOG_TAG, "proxy call [%s] error, invalid_value.", funcName.data());							break;
	case CommonAPI::CallStatus::SUBSCRIPTION_REFUSED:	Log::error(COM_SERVICE_HELPER_LOG_TAG, "proxy call [%s] error, subscripion_refused.", funcName.data());					    break;
	case CommonAPI::CallStatus::UNKNOWN:				Log::error(COM_SERVICE_HELPER_LOG_TAG, "proxy call [%s] error, unknown reson.", funcName.data());							break;
	default:											Log::error(COM_SERVICE_HELPER_LOG_TAG, "proxy call [%s] error, default.", funcName.data());								    break;
	}
}

}}
