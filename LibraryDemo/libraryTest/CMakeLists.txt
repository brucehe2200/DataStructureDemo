# the miniumn version required
cmake_minimum_required (VERSION 2.8.11)
# project info
project (libraryTest)
# add the other resource code path
include_directories(../library/)
# set a variable to mean the all source file at the directory
aux_source_directory(. DIR_SOURCE)
aux_source_directory(../library/ DIR_LIB)
# target
add_executable(a.out ${DIR_SOURCE} ${DIR_LIB})
link_directories({DIR_LIB})
# add the shared library
target_link_libraries(a.out  /sourcecode/DataStructure/LibraryDemo/library/libMyClass.so /sourcecode/DataStructure/LibraryDemo/library/libHello.so)
