cmake_minimum_required(VERSION 2.8)
project( run )

find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

message(STATUS ${OpenCV_INCLUDE_DIRS} )
message(STATUS ${OpenCV_LIBS} )

add_executable( ${PROJECT_NAME} src/main.cpp )

target_link_libraries( ${PROJECT_NAME}  ${OpenCV_LIBS})