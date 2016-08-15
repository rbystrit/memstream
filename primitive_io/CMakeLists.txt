cmake_minimum_required(VERSION 3.6)
project(primitive_io)

find_library(CPPUNIT_LIBRARY cppunit)
find_library(MEMSTREAM_LIBRARY memstream PATHS ../.build/${CMAKE_BUILD_TYPE})
include_directories(include/)
include_directories(../memstream/include/)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC")
file(GLOB SOURCE_FILES "include/*.h" "include/*/*.h" "cpp/*.cpp")
file(GLOB TEST_FILES "test/*.h" "test/*.cpp")

add_library(primitive_io SHARED ${SOURCE_FILES})
target_link_libraries(primitive_io memstream)

add_executable(primitive_io_test ${TEST_FILES})
target_link_libraries(primitive_io_test primitive_io cppunit)

install(TARGETS primitive_io
        DESTINATION lib)
install(DIRECTORY include/ DESTINATION include FILES_MATCHING PATTERN "*.h")