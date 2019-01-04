cmake_minimum_required(VERSION 3.0)

set(NO_POPUP $ENV{NO_POPUP})
if(NO_POPUP STREQUAL true)
    add_definitions(/DNO_POPUP)
endif()
add_definitions(/WX- /W3)
add_definitions(-DWIN32)
add_definitions(-D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD")

project(findLinearTVs C CXX)
set(CRT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(SRC_F
    ${CRT_DIR}/src/main.cpp
)
add_executable(findLinearTVs ${SRC_F})

