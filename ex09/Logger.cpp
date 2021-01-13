#include "Logger.hpp"

Logger::Logger(std::string filePath)
	: logFile(filePath, std::ios_base::app)
{
	if (!logFile.is_open())
		std::cerr << "Could not open log file at \"" << filePath << '"' << std::endl;
	destinations[0] = &Logger::logToConsole;
	destinations[1] = &Logger::logToFile;

	destination_names[0] = "console";
	destination_names[1] = "file";
}

Logger::~Logger()
{
	if (logFile.is_open())
		logFile.close();
}

std::string Logger::makeLogEntry(std::string const &message)
{
	std::time(&time);
	tm time_struct = *std::localtime(&time);
	std::ostringstream oss;
	oss << std::put_time(&time_struct, "[%Y%m%d_%H%M%S] ") << message << std::endl;
	return (oss.str());
}

void Logger::logToConsole(std::string const &message)
{
	std::cout << makeLogEntry(message);
}

void Logger::logToFile(std::string const &message)
{
	if (logFile.is_open())
		logFile << makeLogEntry(message);
}

void Logger::log(std::string const &dest, std::string const &message)
{
	for (int i = 0; i < 2; i++)
	{
		if (destination_names[i] == dest)
		{
			(this->*destinations[i])(message);
			break ;
		}
	}
}
