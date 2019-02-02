cmake_minimum_required (VERSION 2.6)

project (DataStructureForMedian)

if ( CMAKE_COMPILER_IS_GNUCC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Werror")
endif()
if ( MSVC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /W4")
endif()

include_directories("${PROJECT_SOURCE_DIR}")

file(GLOB SRC_FILES "*.cpp")
file(GLOB HEADER_FILES "*.h**")


add_executable(program ${SRC_FILES} ${HEADER_FILES} )