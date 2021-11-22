#include <soa/com/Controller.h>
#include <soa/core/Log.h>
#include <soa/core/Runtime.h>
#include <cassert>
#include <thread>
#include <thread>         // std::thread, std::thread::id, std::this_thread::get_id
#include <chrono>         // std::chrono::second

#include <dds/DCPS/Service_Participant.h>

using namespace soa;
using namespace soa::com;

#define COM_CONTROLLER_APP_LOG_TAG	"com|controller-app"

int main(int argc, char* argv[]){
	Controller::setCommunicationMode(COM_MODE::DDS);
	Controller::connect();
	Log::info(COM_CONTROLLER_APP_LOG_TAG, "test cpu performance for use someip or dds.\r\n");

	static uint64_t tickCount = soa::getTickCount();
	while (1){
		if(soa::getTickCount() - tickCount >= 1000){
			static bool value = true;
			printf("SZF publish111111 %d\n", value);
			Controller::setBoolean("test", value);
			value = !value;
			tickCount = soa::getTickCount();
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(20));
	}

}