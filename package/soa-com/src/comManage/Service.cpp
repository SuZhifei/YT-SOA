#include "Service.h"
#include <Poco/Util/HelpFormatter.h>
#include <Poco/Util/IniFileConfiguration.h>
#include <soa/core/Log.h>
#include <soa/core/Runtime.h>

using namespace soa::com;
using namespace Poco::Util;

#define COM_SERVICE_LOG_TAG	"com|service"

int Service::main(const std::vector<std::string>& args)
{
	if (!m_bHelp)
		waitForTerminationRequest();
	return ServerApplication::EXIT_OK;
}

void Service::initialize(Application & app)
{
	//SOA_LOG_USE_SYSTEM_CONFIG
	ServerApplication::initialize(app);
	if (m_bHelp)
		return;
	auto k = soa::getTickCount();
	bool result = m_model.startup();
	if (result)
	{
		Log::info(COM_SERVICE_LOG_TAG, "model server startup success, cost [%d] ms.", (int)(soa::getTickCount() - k));
	}
	else
	{
		Log::info(COM_SERVICE_LOG_TAG, "model server startup fail");
		terminate();
		return;
	}
}

void Service::uninitialize()
{
	ServerApplication::uninitialize();
	if (!m_bHelp)
	{
		m_model.stop();
		Log::info(COM_SERVICE_LOG_TAG, "model server shutdowm.");
	}
}

void Service::defineOptions(OptionSet & options)
{
	Application::defineOptions(options);
	options.addOption(Option("help", "h", "display help imformation", false).repeatable(false).callback(OptionCallback<Service>(this, &Service::handleHelp)));
	options.addOption(Option("dir", "d", "specify data event dir", false, "dir").repeatable(false).callback(OptionCallback<Service>(this, &Service::handleDataEventDir)));
	//options.addOption(Option("socket", "s", "on|off socket server", false, "on|off").repeatable(false).callback(OptionCallback<Service>(this, &Service::handleSocketDebugHelperOnOff)));
}

void Service::handleHelp(const std::string & name, const std::string & value)
{
	m_bHelp = true;
	HelpFormatter hp(options());
	hp.format(std::cout);
	stopOptionsProcessing();
}

void Service::handleDataEventDir(const std::string & name, const std::string & value)
{
	m_optDataEventDir = value;
}
