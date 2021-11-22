#include <soa/com/Listener.h>
#include <soa/core/Log.h>
#include <soa/core/Runtime.h>
#include <cassert>
#include <thread>

#include <dds/DCPS/Service_Participant.h>

using namespace soa::com;

#define COM_CONTROLLER_APP_LOG_TAG	"com|listener-app"

void onBooleanChanged(const Listener::BooleanChangedArgs &args){
	printf("onBooleanChanged {path = %s, value = %d, timestamp = %d}\n", args.path.c_str(), args.value, args.timestamp);
}

void onIntegerChanged(const Listener::IntegerChangedArgs &args){
	printf("onIntegerChanged {path = %s, value = %d, timestamp = %d}\n", args.path.c_str(), args.value, args.timestamp);
}

void onRealChanged(const Listener::RealChangedArgs &args){
	printf("onBoonRealChangedoleanChanged {path = %s, value = %d, timestamp = %d}\n", args.path.c_str(), args.value, args.timestamp);
}

void onStringChanged(const Listener::StringChangedArgs &args){
	printf("onStringChanged {path = %s, value = %s, timestamp = %d}\n", args.path.c_str(), args.value.c_str(), args.timestamp);
}

void onEnumChanged(const Listener::EnumChangedArgs &args){
	printf("onEnumChanged {path = %s, value = %d, timestamp = %d}\n", args.path.c_str(), args.value, args.timestamp);
}

int main(int argc, char* argv[]){
	Listener	m_listener;
	//事件监听：
	m_listener.BooleanChangedEvent += std::bind(onBooleanChanged, std::placeholders::_1);
	m_listener.IntegerChangedEvent += std::bind(onIntegerChanged, std::placeholders::_1);
	m_listener.RealChangedEvent += std::bind(onRealChanged, std::placeholders::_1);
	m_listener.StringChangedEvent += std::bind(onStringChanged, std::placeholders::_1);
	m_listener.EnumChangedEvent += std::bind(onEnumChanged, std::placeholders::_1);

	//建立通讯连接
	uint64_t k = soa::getTickCount();
	bool bSuccess = false;
	while (!bSuccess)
	{
		bSuccess = true;
		m_listener.setCommunicationMode(COM_MODE::DDS);
		bSuccess = m_listener.connect("test");
	}
	printf("listener connected, cost [%d] %s.\n", (int)(soa::getTickCount() - k), bSuccess ? "success" : "fail");

	while (1){
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	return 0;
}