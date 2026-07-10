cmake_minimum_required(VERSION 3.10)
project(IoT_Monitoring_System)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(iot_monitoring ${SOURCES})
