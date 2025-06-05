cmake_minimum_required(VERSION 3.12)
project(SurvivalGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

include_directories(include)

add_executable(SurvivalGame
    src/main.cpp
    src/Game.cpp
)

target_link_libraries(SurvivalGame sfml-graphics sfml-window sfml-system)
