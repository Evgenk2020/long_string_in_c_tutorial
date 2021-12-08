cmake_minimum_required(VERSION 3.5)

project(str_shared LANGUAGES C)
add_library(str_shared SHARED _lstring.c _lstring.h)

project(str_static LANGUAGES C)
add_library(str_static STATIC _lstring.c _lstring.h)
