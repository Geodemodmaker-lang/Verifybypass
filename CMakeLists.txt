cmake_minimum_required(VERSION 3.21)
project(verifybypass)

find_package(Geode REQUIRED)

add_geode_mod(verifybypass)

target_sources(verifybypass PRIVATE
    src/main.cpp
)