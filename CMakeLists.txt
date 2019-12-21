


#    Filename : CmakeLists.txt
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

project(BraveCoverage)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

find_package(Boost REQUIRED COMPONENTS program_options)
include_directories(${Boost_INCLUDE_DIR})

add_executable(BraveCoverage
                src/main.cpp
                src/brave_coverage.cpp
)

include_directories(
                src/
)

# link Boost libraries to the new target
target_link_libraries(BraveCoverage ${Boost_LIBRARIES})
