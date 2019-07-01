find_package(GTest REQUIRED)

# add an executable for each file in the test suite
add_executable(calc_test ${PROJECT_SOURCE_DIR}/src/test/calc_test.cpp)

target_link_libraries(calc_test GTest::GTest GTest::Main) # this is the main file

# add this for each executable defined above
gtest_discover_tests(calc_test)