// Custom logger implementation

#include <iostream>

// To link a custom logger implementation,
// LINK_LOGGER macro should be defined in the program before including this header file.
// This code block is just to prevent code editors/analyzers from causing warnings about duplicate definitions of the Logger methods.
#ifndef LINK_LOGGER
#define LINK_LOGGER
#endif//LINK_LOGGER

#include "logger.hpp"

void Logger::log(std::string message) {
  std::cout << "Custom logger: " << message << std::endl;
}
