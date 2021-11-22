#include "com/Listener.h"
#include "v1/soa/com/ListenerServerProxy.hpp"
#include "someip/ServiceHelper.h"
#include <Poco/Process.h>
#include "dds/Subscription.h"
#include "MessengerTypeSupportImpl.h"

#define COM_LISTENER_LOG_TAG		"com|listener"

using namespace soa::com;
using namespace v1::soa::com;

DDS::DomainParticipantFactory_var g_domainParticipantFactory;
std::shared_ptr<Subscription<Messenger::Message>> g_subscribeSharedPtr{ nullptr };

Listener::Listener(){}

bool Listener::connect(const std::string &path){
    if(m_comMode == COM_MODE::SOMEIP){
        //connect to service and regist monitoring func
        if(m_listenerServerProxy)
            return true;
        int pid = Poco::Process::id();
        m_listenerServerProxy = buildProxy<ListenerServerProxy>("soa.com.listener");
        if (!waitProxy(m_listenerServerProxy)){
            Log::error(COM_LISTENER_LOG_TAG, "waitProxy failed.\r\n");
            return false;
        }		
        else{
                Log::info(COM_LISTENER_LOG_TAG, "waitProxy success.\r\n");
                m_listenerServerProxy->getNotifyBooleanSelectiveEvent().subscribe([&](std::string path, bool value, uint64_t timestamp) {BooleanChangedEvent.dispatch({path, value, timestamp});});
                m_listenerServerProxy->getNotifyIntegerSelectiveEvent().subscribe([&](std::string path, int32_t value, uint64_t timestamp) {IntegerChangedEvent.dispatch({path, value, timestamp});});
                m_listenerServerProxy->getNotifyRealSelectiveEvent().subscribe([&](std::string path, double value, uint64_t timestamp) {RealChangedEvent.dispatch({path, value, timestamp});});
                m_listenerServerProxy->getNotifyStringSelectiveEvent().subscribe([&](std::string path, std::string value, uint64_t timestamp) {StringChangedEvent.dispatch({path, value, timestamp});});
                m_listenerServerProxy->getNotifyEnumSelectiveEvent().subscribe([&](std::string path, int32_t value, uint64_t timestamp) {EnumChangedEvent.dispatch({path, value, timestamp});});
            }
        try{
                CommonAPI::CallStatus callStatus;
                m_listenerServerProxy->SayHello(pid, path, callStatus);
            }
        catch (...){
            Log::error(COM_LISTENER_LOG_TAG, "connect failed.\r\n");
        }

        return m_listenerServerProxy != nullptr;
    }else{
        // Initialize DomainParticipantFactory
        g_domainParticipantFactory = TheParticipantFactory;
        std::string topic_messenger("messenger");
        g_subscribeSharedPtr = std::make_shared<Subscription<Messenger::Message>>(
                g_domainParticipantFactory, 
                topic_messenger, 
                [&](const Messenger::Message& msg) {
                    static bool v = false;
                    BooleanChangedEvent.dispatch({"hello listener test!", v, 539});
                    v = !v;
                    }
            );
        
        //Enable subscriber
        DDS::ReturnCode_t ret;
        if ( (ret = g_subscribeSharedPtr->enable()) != DDS::RETCODE_OK )
        {
            ACE_ERROR_RETURN((LM_ERROR, ACE_TEXT("%N:%l: Subscription enable failed! (%d)\n"), ret), -1);
        }
    }
}

bool Listener::disconnect(){
	if(m_comMode == COM_MODE::SOMEIP){
		m_listenerServerProxy.reset();
		return true;
	}else{
		g_subscribeSharedPtr->get_participant()->delete_contained_entities();
		g_domainParticipantFactory->delete_participant(g_subscribeSharedPtr->get_participant());
		return true;
	}
}

void Listener::setCommunicationMode(const COM_MODE &communicationMode){
    m_comMode = communicationMode;
}

COM_MODE Listener::getCommunicationMode(){
    return m_comMode;
}
