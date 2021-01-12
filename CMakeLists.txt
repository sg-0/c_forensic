#[[------------------------------------------

	-------------------------------
<<<<<<< HEAD
	sg-0's cmake script
=======
	gsandro's cmake script
>>>>>>> 6b727b04376bc0a5e139820c7fab5e63411094e8
	-------------------------------
	
	Project: Generic

---------------------------------------------]]# 

cmake_minimum_required( VERSION 3.10 FATAL_ERROR )

set(CMAKE_BUILD_TYPE DEBUG)

project( hacking ASM C CXX )

option( OPTION_BUILD_BASICS ON)
option( OPTION_BUILD_CRYPT ON)
option( OPTION_BUILD_MEMORY ON)
option( OPTION_BUILD_NETWORK ON)
option( OPTION_BUILD_SYSTEM ON)

set(src_includes 
	${CMAKE_CURRENT_SOURCE_DIR}/include/hacking.h
	${CMAKE_CURRENT_SOURCE_DIR}/include/hacking-network.h
)

# add subdirectories
if(OPTION_BUILD_BASICS)
	add_subdirectory(basics)
endif()

if(OPTION_BUILD_CRYPT)
	add_subdirectory(crypt)
endif()

if(OPTION_BUILD_MEMORY)
	add_subdirectory(memory)
endif()

if(OPTION_BUILD_NETWORK)
	add_subdirectory(network)
endif()

if(OPTION_BUILD_SYSTEM)
	add_subdirectory(system)
endif()
