// Logger header file

#ifndef METALL_LOGGER_HPP
#define METALL_LOGGER_HPP

#include <string>

class Logger {
 public:
  void log(std::string message);
};

#endif //METALL_LOGGER_HPP

#ifndef LINK_LOGGER
#include "default_logger.ipp"
#endif//LINK_LOGGER