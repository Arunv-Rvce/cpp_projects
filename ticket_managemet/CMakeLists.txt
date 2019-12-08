cmake_minimum_required(VERSION 3.15)
project(ticket_managemet)

set(CMAKE_CXX_STANDARD 17)

add_executable(ticket_managemet main.cpp Ticket.h Ticket.cpp SqliteService.h SqliteService.cpp)