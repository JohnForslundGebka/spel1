cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 17)
project(spel1)

add_subdirectory(external/raylib)

include_directories({$CMAKE_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

# Checks if OSX and links appropriate frameworks (only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE "-framework IOKit" "-framework Cocoa" "-framework OpenGL")
endif()