# the miniumn version required
cmake_minimum_required (VERSION 2.8.11)
# project info
project (libraryTest)
# add the sub resource code path
add_subdirectory(../library)
# add the shared library
target_link_libraries(a.out libMyClass.so libHello.so)
# set a variable to mean the all source file at the directory
aux_source_directory(. DIR_SOURCE)
# target
add_executable(a.out ${DIR_SOURCE})
