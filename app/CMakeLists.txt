cmake_minimum_required(VERSION 3.10)
project(Codes_In_C_or_Cpp)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(crow)

include_directories(${CMAKE_SOURCE_DIR}/asio/asio/include)

add_executable(Codes_In_C_or_Cpp Crow.cpp)
target_link_libraries(Codes_In_C_or_Cpp PRIVATE Crow)