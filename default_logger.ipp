// Default logger implementation

#ifndef METALL_DEFAULT_LOGGER_IPP
#define METALL_DEFAULT_LOGGER_IPP

#include "logger.hpp"

void Logger::log(std::string message) {
  std::cout << "Default logger: " << message << std::endl;
}

#endif//METALL_DEFAULT_LOGGER_IPP