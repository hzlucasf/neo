cmake_minimum_required(VERSION 3.15.0)

project(neo)

add_library(neo STATIC neo.c)

install(TARGETS neo DESTINATION lib)

install(FILES neo.h DESTINATION include)
