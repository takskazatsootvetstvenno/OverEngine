cmake_minimum_required(VERSION 3.20)

set(PROJECT_NAME OverEngine)

project(${PROJECT_NAME})

add_subdirectory(OverEngineCore)
add_subdirectory(OverEngineEditor)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT OverEngineEditor)

