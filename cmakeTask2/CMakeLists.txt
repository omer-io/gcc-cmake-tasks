cmake_minimum_required(VERSION 3.30.1)
project(cmaketask2)

include(FetchContent)
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

set(APP_SOURCES app/mainapp.cpp)

add_executable(mainjson ${APP_SOURCES})

target_link_libraries(mainjson nlohmann_json)
