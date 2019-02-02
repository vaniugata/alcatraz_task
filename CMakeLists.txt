cmake_minimum_required (VERSION 2.6)

project (DataStructureForMedian)

include_directories("${PROJECT_SOURCE_DIR}")

file(GLOB SRC_FILES "*.cpp")
file(GLOB HEADER_FILES "*.h**")


add_executable(program ${SRC_FILES} ${HEADER_FILES} )