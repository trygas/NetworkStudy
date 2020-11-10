cmake_minimum_required(VERSION 3.4.1)
project(NetworkStudy)

find_package(libevent)
include_directories(${LIBEVENT_INCLUDE_DIR})
add_executable(demo src/main.cpp)
target_link_libraries(demo ${LIBEVENT_LIBRARY})
