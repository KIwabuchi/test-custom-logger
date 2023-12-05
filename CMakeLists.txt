cmake_minimum_required(VERSION 3.26)
project(test_link)

set(CMAKE_CXX_STANDARD 17)

# For the default logger
add_executable(log_default main.cpp)

# For the custom logger
add_library(custom_logger custom_logger.cpp)
target_compile_definitions(custom_logger PUBLIC USE_CUSTOM_LOGGER)
add_executable(log_custom main.cpp)
target_link_libraries(log_custom custom_logger)