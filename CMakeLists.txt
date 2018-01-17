cmake_minimum_required(VERSION 3.9)
project(Nimble)

set(CMAKE_CXX_STANDARD 11)

add_executable(Nimble main.cpp src/os_posix_file/file_create.cpp src/os_posix_file/file_create.h src/coll/collection.cpp src/coll/collection.h src/coll/fop.cpp src/coll/fop.h src/conn/conn_open.cpp src/conn/conn_open.h src/session/sess_open.cpp src/session/sess_open.h src/impl/graphdb.cpp src/impl/graphdb.h)