cmake_minimum_required(VERSION 3.16)
project(AlienInvaders LANGUAGES CXX)

# Set flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror")

# Set the path to your SFML directory
set(SFML_DIR SFML-2.5.1/lib/cmake/SFML/)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(AlienInvaders src/main.cpp src/player.cpp src/invader.cpp src/bullet.cpp)

# Specify the SFML include directories
target_include_directories(AlienInvaders PRIVATE ${SFML_INCLUDE_DIR})

# Specify the SFML libraries to link
target_link_libraries(AlienInvaders sfml-graphics sfml-window sfml-system)

# Precompile SFML header
install(TARGETS AlienInvaders)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
