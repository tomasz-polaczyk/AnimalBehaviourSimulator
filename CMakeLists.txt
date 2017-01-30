cmake_minimum_required(VERSION 3.5.1)
project(animal_behaviour_simulator)

if( NOT CMAKE_BUILD_TYPE )
  set( CMAKE_BUILD_TYPE Debug CACHE STRING
       "Choose the type of build, options are: None Debug Release RelWithDebInfo
MinSizeRel."
       FORCE )
endif()

set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra")
message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")

#add boost headers
find_package(Boost 1.58.0)
if(Boost_FOUND)
	include_directories(${Boost_INCLUDE_DIRS})
	include_directories(include)
	file(GLOB SOURCES "source/*.cpp")
	add_executable(abs ${SOURCES})
endif()
