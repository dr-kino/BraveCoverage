# Description : Definition of all source and header files of one package.
#               To add this package to a project, include this file in the corresponding CMakeLists.txt file.
#      Author :
#     Release :
#   Copyright : 
#    Revision : 
# ------------------------------------------------------------------------------------------------
#     History : 
# ================================================================================================
cmake_minimum_required (VERSION 3.7)

include_directories(/usr/include)
link_directories(/usr/lib)

project(TestBraveCoverage)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

find_package(Boost REQUIRED COMPONENTS program_options)
include_directories(${Boost_INCLUDE_DIR})

set(sources
                src/test_main.cpp
                src/test_brave_coverage.cpp
                ../src/brave_coverage.cpp
                )

add_executable(TestBraveCoverage ${sources})

include_directories(
                src/
                ../src/
                )

# link Boost libraries to the new target
target_link_libraries(TestBraveCoverage ${Boost_LIBRARIES})
target_link_libraries(TestBraveCoverage gtest)
target_link_libraries(TestBraveCoverage gmock)
target_link_libraries(TestBraveCoverage pthread)
