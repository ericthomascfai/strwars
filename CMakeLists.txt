cmake_minimum_required(VERSION 3.20)
project(strwars)

set(CMAKE_CXX_STANDARD 14)

add_executable(strwars main.cpp Humanoide.cpp Humanoide.h Princesse.cpp Princesse.h MembreEmpire.cpp MembreEmpire.h Rebel.cpp Rebel.h Barman.cpp Barman.h)
