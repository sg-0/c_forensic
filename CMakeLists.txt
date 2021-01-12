#[[------------------------------------------

	-------------------------------
	sg-0's cmake script
	gsandro's cmake script
	-------------------------------
	
	Project: Generic

---------------------------------------------]]# 

cmake_minimum_required( VERSION 3.10 FATAL_ERROR )

set(CMAKE_BUILD_TYPE DEBUG)

project( hacking ASM C CXX )

option(BUILD_BASICS ON)
option(BUILD_CRYPT ON)
option(BUILD_MEMORY ON)
option(BUILD_NETWORK ON)
option(BUILD_SYSTEM ON)

set(BUILD_BASICS ON)
set(BUILD_CRYPT ON)
set(BUILD_MEMORY ON)
set(BUILD_NETWORK ON)
set(BUILD_SYSTEM ON)

set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

string(APPEND CMAKE_EXE_LINKER_FLAGS "-lcrypt")

# add subdirectories
if(BUILD_BASICS)
	add_subdirectory(basics)
endif()

if(BUILD_CRYPT)
	add_subdirectory(crypt)
endif()

if(BUILD_MEMORY)
	add_subdirectory(memory)
endif()

if(BUILD_NETWORK)
	add_subdirectory(network)
endif()

if(BUILD_SYSTEM)
	add_subdirectory(system)
endif()
