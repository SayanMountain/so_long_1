cmake_minimum_required(VERSION 3.19)
project(push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(so_long
       main.c
        image_for_map.c
        hook.c
        map.ber
        )

