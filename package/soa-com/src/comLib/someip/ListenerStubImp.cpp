#include "ListenerStubImp.h"
#include "../Model.h"
#include "Poco/Foundation.h"
#include "Poco/JSON/Parser.h"

#if POCO_OS == POCO_OS_WINDOWS_NT
#include <windows.h>
//HWND handler;
#elif POCO_OS == POCO_OS_LINUX
//do the Linux thing
#elif POCO_OS == POCO_OS_QNX
//do the QNX thing
#endif

using namespace soa::com;

ListenerStubImp::ListenerStubImp(Model* model)
    :m_model(model){

}

void ListenerStubImp::notifyBoolean(const std::string &path, bool b, uint64_t timestamp) {
	fireNotifyBooleanSelective(path, b, timestamp, getReceiver(path));
}

void ListenerStubImp::notifyInteger(const std::string &path, int32_t n, uint64_t timestamp){
	fireNotifyIntegerSelective(path, n, timestamp, getReceiver(path));
}

void ListenerStubImp::notifyReal(const std::string &path, double d, uint64_t timestamp){
	fireNotifyRealSelective(path, d, timestamp, getReceiver(path));
}

void ListenerStubImp::notifyString(const std::string &path, const std::string &str, uint64_t timestamp){
	fireNotifyStringSelective(path, str, timestamp, getReceiver(path));
}

void ListenerStubImp::notifyEnum(const std::string &path, int32_t e, uint64_t timestamp){
	fireNotifyEnumSelective(path, e, timestamp, getReceiver(path));
}

void ListenerStubImp::SayHello(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _pid, std::string _path, SayHelloReply_t _reply) {
	m_Receivers[_client->hashCode()] = std::make_pair(_client, _path);
}

std::shared_ptr<CommonAPI::ClientIdList> ListenerStubImp::getReceiver(const std::string &path) const {
    auto receivers = std::make_shared<CommonAPI::ClientIdList>();
	for (auto listener : m_Receivers)
		if (listener.second.second == path)
			receivers->insert(listener.second.first);
	return receivers;
}