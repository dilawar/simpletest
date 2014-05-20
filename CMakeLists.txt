CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(SimpleTest)

add_library(SimpleTest STATIC simple_test.hpp)
set_target_properties(SimpleTest PROPERTIES LINKER_LANGUAGE CXX)

