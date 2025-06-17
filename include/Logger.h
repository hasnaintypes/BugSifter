#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>

class Logger {
public:
    static Logger& getInstance();
    void log(const std::string& message);

private:
    Logger();
    std::ofstream logFile;
};

extern Logger& gLogger;

#endif 