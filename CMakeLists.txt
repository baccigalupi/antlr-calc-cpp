cmake_minimum_required(VERSION 3.14)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 14)

project(calc)

# antlr related stuff
include(ExternalAntlr4Cpp)
include_directories(${ANTLR4_INCLUDE_DIRS})
set(ANTLR4CPP_JAR_LOCATION ${PROJECT_SOURCE_DIR}/lib/antlr/antlr-4.7.2-complete.jar)
include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
link_directories( ${ANTLR4CPP_LIBS} )

message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS} ")

# build
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

include_directories("${PROJECT_SOURCE_DIR}/src")

add_executable(calc ${PROJECT_SOURCE_DIR}/src/calc.cpp)

# testing
enable_testing()
find_package(GTest REQUIRED)

add_executable(calc_test ${PROJECT_SOURCE_DIR}/src/calc_test.cpp)
target_link_libraries(calc_test GTest::GTest GTest::Main)

add_test(AllTestsInCalc calc_test)