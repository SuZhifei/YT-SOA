#include "com/Controller.h"
#include <Poco/JSON/Object.h>
#include <Poco/JSON/Array.h>
#include <Poco/JSON/Parser.h>
#include <Poco/Process.h>
#include <Poco/Thread.h>
#include "someip/ServiceHelper.h"
#include <v1/soa/com/ControllerServerProxy.hpp>
#include "dds/Publication.h"
#include "MessengerTypeSupportImpl.h"


#define COM_CONTROLLER_LOG_TAG		"com|controller"

using namespace soa::com;
using namespace v1::soa::com;

static COM_MODE m_comMode{ COM_MODE::SOMEIP };

static std::shared_ptr<ControllerServerProxy<>> g_controllerProxy;
static std::shared_ptr<Publication<Messenger::Message>> g_publishSharedPtr;
static DDS::DomainParticipantFactory_var g_domainParticipantFactory;

bool Controller::connect(){
	if(m_comMode == COM_MODE::SOMEIP){
		static bool flag{ false };
		if(!flag){
			initEnv();
			Log::info(COM_CONTROLLER_LOG_TAG, "COMMONAPI_CONFIG=%s", getenv("COMMONAPI_CONFIG"));
			Log::info(COM_CONTROLLER_LOG_TAG, "VSOMEIP_CONFIGURATION=%s", getenv("VSOMEIP_CONFIGURATION"));
			flag = true;
		}

		if (g_controllerProxy)
			return true;
		g_controllerProxy = buildProxy<ControllerServerProxy>("soa.com.controller");
		if (!waitProxy(g_controllerProxy)) {
			Log::error(COM_CONTROLLER_LOG_TAG, "waitProxy failed.\r\n");
			return false;
		}
		else {
			Log::info(COM_CONTROLLER_LOG_TAG, "waitProxy success.\r\n");
		}

		return g_controllerProxy != nullptr;

	}else{
		// Initialize DomainParticipantFactory
    	g_domainParticipantFactory = TheParticipantFactory;
		printf("tello test!!!!!!!!!\n");
		std::string topic_messenger("messenger");
		g_publishSharedPtr = std::make_shared<Publication<Messenger::Message>>(g_domainParticipantFactory, topic_messenger);

		//Enable publisher
		DDS::ReturnCode_t ret;
		if ( (ret = g_publishSharedPtr->enable()) != DDS::RETCODE_OK )
		{
			ACE_ERROR_RETURN((LM_ERROR, ACE_TEXT("%N:%l: Publisher enable failed! (%d)\n"), ret), -1);
		}
		
		return true;
	}

}

bool Controller::disconnect(){
	if(m_comMode == COM_MODE::SOMEIP){
		//commonapi server无法知道client退出，所以做不了很多实际性的事情。但在server端尝试给client端发送事件的时候，无异常
		g_controllerProxy.reset();
		return true;
	}else{
		g_publishSharedPtr->get_participant()->delete_contained_entities();
		g_domainParticipantFactory->delete_participant(g_publishSharedPtr->get_participant());
		return true;
	}
}

bool Controller::isConnected(){
	if(m_comMode == COM_MODE::SOMEIP){
    	return g_controllerProxy != nullptr;
	}else{
		return true;
	}
}

void Controller::setBoolean(const std::string &path, bool b){
	if(m_comMode == COM_MODE::SOMEIP){
		if (g_controllerProxy == nullptr){
			Log::error(COM_CONTROLLER_LOG_TAG, "controller[%s] has not connected to service when call [%s].", soa::getProcessName(Poco::Process::id()).data(), __FUNCTION__);
			std::quick_exit(1);
		}

		CommonAPI::CallStatus callStatus;
		g_controllerProxy->SetBoolean(path, b, soa::getTickCount(), callStatus);
		if (callStatus != CommonAPI::CallStatus::SUCCESS){
			Log::error(COM_CONTROLLER_LOG_TAG, "setBoolean(path[%s]) failed.", path);
		}
	}else{
		static Messenger::Message msg{"hello msg test!!", "first msg", 0, "this is a text!", 0};
		msg.subject_id = b;
		g_publishSharedPtr->publish(msg);
		msg.count++;
	}
}

void Controller::setReal(const std::string &path, double d){
	if(m_comMode == COM_MODE::SOMEIP){
		if (g_controllerProxy == nullptr){
			Log::error(COM_CONTROLLER_LOG_TAG, "controller[%s] has not connected to service when call [%s].", soa::getProcessName(Poco::Process::id()).data(), __FUNCTION__);
			std::quick_exit(1);
		}

		CommonAPI::CallStatus callStatus;
		g_controllerProxy->SetReal(path, d, soa::getTickCount(), callStatus);
		if (callStatus != CommonAPI::CallStatus::SUCCESS){
			Log::error(COM_CONTROLLER_LOG_TAG, "setBoolean(path[%s]) failed.", path);
		}
	}else{
	}
}

void Controller::setString(const std::string &path, const std::string &str){
	if(m_comMode == COM_MODE::SOMEIP){
		if (g_controllerProxy == nullptr){
			Log::error(COM_CONTROLLER_LOG_TAG, "controller[%s] has not connected to service when call [%s].", soa::getProcessName(Poco::Process::id()).data(), __FUNCTION__);
			std::quick_exit(1);
		}

		CommonAPI::CallStatus callStatus;
		g_controllerProxy->SetString(path, str, soa::getTickCount(), callStatus);
		if (callStatus != CommonAPI::CallStatus::SUCCESS){
			Log::error(COM_CONTROLLER_LOG_TAG, "setBoolean(path[%s]) failed.", path);
		}
	}else{
	}
}

void Controller::setEnum(const std::string &path, int32_t e){
	if(m_comMode == COM_MODE::SOMEIP){
		if (g_controllerProxy == nullptr){
			Log::error(COM_CONTROLLER_LOG_TAG, "controller[%s] has not connected to service when call [%s].", soa::getProcessName(Poco::Process::id()).data(), __FUNCTION__);
			std::quick_exit(1);
		}

		CommonAPI::CallStatus callStatus;
		g_controllerProxy->SetEnum(path, e, soa::getTickCount(), callStatus);
		if (callStatus != CommonAPI::CallStatus::SUCCESS){
			Log::error(COM_CONTROLLER_LOG_TAG, "setBoolean(path[%s]) failed.", path);
		}
	}else{
	}
}

void Controller::setCommunicationMode(const COM_MODE &communicationMode){
	m_comMode = communicationMode;
}

COM_MODE Controller::getCommunicationMode(){
	return m_comMode;
}