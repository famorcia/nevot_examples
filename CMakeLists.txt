cmake_minimum_required (VERSION 2.6)
project (NEVoT_examples)

include_directories ("${PROJECT_SOURCE_DIR}/include")
include_directories ("${PROJECT_SOURCE_DIR}/../nevot")

set (EXTRA_LIBS ${EXTRA_LIBS} nevot cppunit)

add_subdirectory (src)



