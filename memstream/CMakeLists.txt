cmake_minimum_required(VERSION 3.6)
project(memstream)

find_library(CPPUNIT_LIBRARY cppunit)
include_directories(include/)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC")
set(TEST_FILES test/main.cpp test/allocator_test.h test/membuf_test.h)
set(SOURCE_FILES include/memstream/allocator.h cpp/allocator.cpp include/memstream.h include/memstream/memstream.h cpp/memstream.cpp)

add_library(memstream SHARED ${SOURCE_FILES})
add_executable(memstream_test ${TEST_FILES})

target_link_libraries(memstream_test memstream cppunit)

install(TARGETS memstream
        DESTINATION lib)
install(DIRECTORY include/ DESTINATION include FILES_MATCHING PATTERN "*.h")