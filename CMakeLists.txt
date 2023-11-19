cmake_minimum_required(VERSION 3.16)

# Set Project
project(AlienInvaders LANGUAGES CXX)
set(CMAKE_BUILD_TYPE Debug)  # or Release

source_group("Header Files" FILES ${HEADER_FILES})
source_group("Source Files" FILES ${SOURCE_FILES})

add_executable(AlienInvaders
    src/main.cpp
    src/player.cpp
    src/bullet.cpp
    src/enemy.cpp
    src/gameFunctions.cpp
    src/playerFunctions.cpp
    src/bulletFunctions.cpp
    src/enemyFunctions.cpp
    src/renderGame.cpp
)

# Set flags
target_compile_features(AlienInvaders PRIVATE cxx_std_20)
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(AlienInvaders PRIVATE
        -Wall           # Enable most warning messages
        -Wextra         # Enable some extra warning messages
        -Wpedantic      # Warn on non-standard C++ constructs
        -Werror         # Treat warnings as errors
        -Wconversion    # Warn on implicit type conversions
        -Wunreachable-code  # Warn about unreachable code
        -Wunused        # Warn about unused variables and parameters
        -Wshadow        # Warn about variable shadowing
    )
elseif(MSVC)
    target_compile_options(AlienInvaders PRIVATE
        /W4             # Set warning level to 4
        /WX             # Treat warnings as errors
    )
endif()

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")

# Set the path to your SFML directory
set(SFML_DIR SFML-2.5.1/lib/cmake/SFML/)
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Specify the SFML include directories
target_include_directories(AlienInvaders PRIVATE ${SFML_INCLUDE_DIR})

# Specify the SFML libraries to link
target_link_libraries(AlienInvaders sfml-graphics sfml-window sfml-system)

install(TARGETS AlienInvaders)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
