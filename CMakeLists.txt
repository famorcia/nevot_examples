cmake_minimum_required (VERSION 2.6)
project (NEVoT_examples)

set( CMAKE_VERBOSE_MAKEFILE on)

set (EXTRA_LIBS ${EXTRA_LIBS} nevot cppunit)

include_directories ("${PROJECT_SOURCE_DIR}/include")
include_directories ("${PROJECT_SOURCE_DIR}/../nevot/include")

LINK_DIRECTORIES( ${LINK_DIRECTORIES} /usr/local/lib ) 
LINK_DIRECTORIES( ${LINK_DIRECTORIES} "${PROJECT_SOURCE_DIR}/../nevot/build" ) 

add_subdirectory (src)



