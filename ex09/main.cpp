#include "Logger.hpp"

int main(void) {
	Logger logger("test.log");

	logger.log("console", "Hello console!");
	logger.log("file", "Hello file!");
}