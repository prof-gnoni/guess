cmake_minimum_required(VERSION 3.23)
project(guess C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(guess
        mainGuess.c)
