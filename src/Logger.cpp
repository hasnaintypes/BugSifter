
#include "Logger.h"
#include <iostream>

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

Logger::Logger() {
    logFile.open("bugsifter.log", std::ios::app);
}

void Logger::log(const std::string& message) {
    logFile << message << std::endl; 
    std::cout << "[LOG] " << message << std::endl;
}

Logger& gLogger = Logger::getInstance();
