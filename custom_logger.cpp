#include <iostream>
#include "logger.hpp"

void Logger::log(std::string message) {
  std::cout << "Custom logger: " << message << std::endl;
}
