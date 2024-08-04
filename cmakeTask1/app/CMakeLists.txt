# include_directories(${CMAKE_SOURCE_DIR}/include)
set(APP_SOURCES mainapp.cpp)
add_executable(main ${APP_SOURCES})
target_link_libraries(main mymathlib)