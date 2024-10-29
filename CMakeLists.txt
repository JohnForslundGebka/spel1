cmake_minimum_required(VERSION 3.29)
set(CMAKE_CXX_STANDARD 17)
project(spel1)

add_subdirectory(external/raylib)

add_executable(spel1 main.cpp)

target_link_libraries(your_target PRIVATE raylib)
# Checks if OSX and links appropriate frameworks (only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()