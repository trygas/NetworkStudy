cmake_minimum_required(VERSION 3.4.1)
project(NetworkStudy)

find_package(libevent)
include_directories(${LIBEVENT_INCLUDE_DIR})

add_executable(example_epoll Example1/Example_epoll.cpp)
target_link_libraries(example_epoll ${LIBEVENT_LIBRARY})

add_executable(example_2 Example2/Example2.cpp)

add_executable(example_3 Example3/Example3.cpp
                         Example3/Channel.cpp
                         Example3/TcpServer.cpp)

