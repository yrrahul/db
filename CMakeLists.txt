cmake_minimum_required(VERSION 3.9)
project(Nimble)

set(CMAKE_CXX_STANDARD 11)

add_executable(Nimble main.cpp src/os_posix_file/file_create.cpp src/os_posix_file/file_create.h src/coll/coll_file.cpp src/coll/coll_file.h src/coll/fop.cpp src/coll/fop.h)