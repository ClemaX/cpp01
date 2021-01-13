#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>

class Logger
{
public:
	typedef void (Logger::*LoggerDest)(std::string const &);

	Logger(std::string filePath);
	~Logger(void);

	void log(std::string const &dest, std::string const &message);

private:
	std::ofstream logFile;
	time_t time;

	LoggerDest destinations[2];
	std::string destination_names[2];

	std::string makeLogEntry(std::string const &message);

	void logToConsole(std::string const &message);
	void logToFile(std::string const &message);
};
