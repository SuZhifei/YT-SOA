#include "Model.h"
#include "someip/ServiceHelper.h"
#include "someip/ControllerStubImp.h"
#include "someip/ListenerStubImp.h"

#define COM_MODEL_LOG_TAG		"com|model"

using namespace soa::com;

bool Model::startup(){
	Log::info(COM_MODEL_LOG_TAG, "startup.\r\n");
	bool ret = initController(5 * 1000);
	ret &= initListener(5 * 1000);
	return ret;
}

bool Model::stop(){
	return true;
}

bool Model::setBoolean(const std::string &path, const bool &b, const uint64_t &timestamp) {
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    m_listenerStubImp->notifyBoolean(path, b, timestamp);
    return true;
}

bool Model::setInteger(const std::string &path, const int32_t &n, const uint64_t &timestamp){
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    m_listenerStubImp->notifyInteger(path, n, timestamp);
    return true;
}

bool Model::setReal(const std::string &path, const double &d, const uint64_t &timestamp){
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    m_listenerStubImp->notifyReal(path, d, timestamp);
    return true;
}

bool Model::setString(const std::string &path, const std::string &str, const uint64_t &timestamp){
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    m_listenerStubImp->notifyString(path, str, timestamp);
    return true;
}

bool Model::setEnum(const std::string &path, const int32_t &e, const uint64_t &timestamp){
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    m_listenerStubImp->notifyEnum(path, e, timestamp);
    return true;
}

bool Model::initController(uint32_t timeoutMs) {
	m_controllerStubImp = std::make_shared<ControllerStubImp>(this);
	bool ret = registerService<ControllerStubImp>(m_controllerStubImp, "soa.com.controller");
	if (!ret){
		Log::error(COM_MODEL_LOG_TAG, "init Controller timeout for [%d] ms, maybe stub dll(so) not found. check env COMMONAPI_CONFIG.\r\n", timeoutMs);
	}
	return ret;
}

bool Model::initListener(uint32_t timeoutMs) {
	m_listenerStubImp = std::make_shared<ListenerStubImp>(this); 
	bool ret = registerService<ListenerStubImp>(m_listenerStubImp, "soa.com.listener");
	if (!ret){
		Log::error(COM_MODEL_LOG_TAG, "init Listener timeout for [%d] ms, maybe stub dll(so) not found. check env COMMONAPI_CONFIG.\r\n", timeoutMs);
	}
	return ret;
}
