# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /nix/store/5h0akwq4cwlc3yp92i84nfgcxpv5xv79-cmake-3.26.4/bin/cmake

# The command to remove a file.
RM = /nix/store/5h0akwq4cwlc3yp92i84nfgcxpv5xv79-cmake-3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/boi/Projects/C++/Uni/Final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/boi/Projects/C++/Uni/Final/build

# Include any dependencies generated for this target.
include CMakeFiles/AlienInvaders.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AlienInvaders.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AlienInvaders.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlienInvaders.dir/flags.make

CMakeFiles/AlienInvaders.dir/src/main.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/main.cpp.o: /home/boi/Projects/C++/Uni/Final/src/main.cpp
CMakeFiles/AlienInvaders.dir/src/main.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AlienInvaders.dir/src/main.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/main.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/main.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/main.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/main.cpp

CMakeFiles/AlienInvaders.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/main.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/main.cpp > CMakeFiles/AlienInvaders.dir/src/main.cpp.i

CMakeFiles/AlienInvaders.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/main.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/main.cpp -o CMakeFiles/AlienInvaders.dir/src/main.cpp.s

CMakeFiles/AlienInvaders.dir/src/player.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/player.cpp.o: /home/boi/Projects/C++/Uni/Final/src/player.cpp
CMakeFiles/AlienInvaders.dir/src/player.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AlienInvaders.dir/src/player.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/player.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/player.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/player.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/player.cpp

CMakeFiles/AlienInvaders.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/player.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/player.cpp > CMakeFiles/AlienInvaders.dir/src/player.cpp.i

CMakeFiles/AlienInvaders.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/player.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/player.cpp -o CMakeFiles/AlienInvaders.dir/src/player.cpp.s

CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o: /home/boi/Projects/C++/Uni/Final/src/bullet.cpp
CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/bullet.cpp

CMakeFiles/AlienInvaders.dir/src/bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/bullet.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/bullet.cpp > CMakeFiles/AlienInvaders.dir/src/bullet.cpp.i

CMakeFiles/AlienInvaders.dir/src/bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/bullet.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/bullet.cpp -o CMakeFiles/AlienInvaders.dir/src/bullet.cpp.s

CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o: /home/boi/Projects/C++/Uni/Final/src/enemy.cpp
CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/enemy.cpp

CMakeFiles/AlienInvaders.dir/src/enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/enemy.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/enemy.cpp > CMakeFiles/AlienInvaders.dir/src/enemy.cpp.i

CMakeFiles/AlienInvaders.dir/src/enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/enemy.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/enemy.cpp -o CMakeFiles/AlienInvaders.dir/src/enemy.cpp.s

CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o: /home/boi/Projects/C++/Uni/Final/src/gameFunctions.cpp
CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/gameFunctions.cpp

CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/gameFunctions.cpp > CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.i

CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/gameFunctions.cpp -o CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.s

CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o: /home/boi/Projects/C++/Uni/Final/src/playerFunctions.cpp
CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/playerFunctions.cpp

CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/playerFunctions.cpp > CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.i

CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/playerFunctions.cpp -o CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.s

CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o: /home/boi/Projects/C++/Uni/Final/src/bulletFunctions.cpp
CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/bulletFunctions.cpp

CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/bulletFunctions.cpp > CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.i

CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/bulletFunctions.cpp -o CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.s

CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o: /home/boi/Projects/C++/Uni/Final/src/enemyFunctions.cpp
CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/enemyFunctions.cpp

CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/enemyFunctions.cpp > CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.i

CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/enemyFunctions.cpp -o CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.s

CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o: CMakeFiles/AlienInvaders.dir/flags.make
CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o: /home/boi/Projects/C++/Uni/Final/src/renderGame.cpp
CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o: CMakeFiles/AlienInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o -MF CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o.d -o CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o -c /home/boi/Projects/C++/Uni/Final/src/renderGame.cpp

CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.i"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boi/Projects/C++/Uni/Final/src/renderGame.cpp > CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.i

CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.s"
	/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boi/Projects/C++/Uni/Final/src/renderGame.cpp -o CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.s

# Object files for target AlienInvaders
AlienInvaders_OBJECTS = \
"CMakeFiles/AlienInvaders.dir/src/main.cpp.o" \
"CMakeFiles/AlienInvaders.dir/src/player.cpp.o" \
"CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o" \
"CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o" \
"CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o" \
"CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o" \
"CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o" \
"CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o" \
"CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o"

# External object files for target AlienInvaders
AlienInvaders_EXTERNAL_OBJECTS =

AlienInvaders: CMakeFiles/AlienInvaders.dir/src/main.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/src/player.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/src/bullet.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/src/enemy.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/src/gameFunctions.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/src/playerFunctions.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/src/bulletFunctions.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/src/enemyFunctions.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/src/renderGame.cpp.o
AlienInvaders: CMakeFiles/AlienInvaders.dir/build.make
AlienInvaders: /nix/store/7yl5rs66arcqj2c0nwgaq0j7bdi2c08d-sfml-2.5.1/lib/libsfml-graphics.so.2.5.1
AlienInvaders: /nix/store/7yl5rs66arcqj2c0nwgaq0j7bdi2c08d-sfml-2.5.1/lib/libsfml-window.so.2.5.1
AlienInvaders: /nix/store/7yl5rs66arcqj2c0nwgaq0j7bdi2c08d-sfml-2.5.1/lib/libsfml-system.so.2.5.1
AlienInvaders: CMakeFiles/AlienInvaders.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/boi/Projects/C++/Uni/Final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable AlienInvaders"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AlienInvaders.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlienInvaders.dir/build: AlienInvaders
.PHONY : CMakeFiles/AlienInvaders.dir/build

CMakeFiles/AlienInvaders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AlienInvaders.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AlienInvaders.dir/clean

CMakeFiles/AlienInvaders.dir/depend:
	cd /home/boi/Projects/C++/Uni/Final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/boi/Projects/C++/Uni/Final /home/boi/Projects/C++/Uni/Final /home/boi/Projects/C++/Uni/Final/build /home/boi/Projects/C++/Uni/Final/build /home/boi/Projects/C++/Uni/Final/build/CMakeFiles/AlienInvaders.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AlienInvaders.dir/depend

