cmake_minimum_required(VERSION 3.24)
project(printf C)

set(CMAKE_C_STANDARD 11)

add_executable(printf ft_printf.c ft_printf.h ft_formats.c ft_print_addr.c ft_print_hex.c ft_printf_utils.c)
