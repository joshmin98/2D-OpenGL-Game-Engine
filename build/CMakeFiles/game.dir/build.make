# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joshmin/Documents/Winter_Break_2017/GameProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joshmin/Documents/Winter_Break_2017/GameProject/build

# Include any dependencies generated for this target.
include CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game.dir/flags.make

CMakeFiles/game.dir/src/Agent.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/Agent.cpp.o: ../src/Agent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game.dir/src/Agent.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/Agent.cpp.o -c /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Agent.cpp

CMakeFiles/game.dir/src/Agent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/Agent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Agent.cpp > CMakeFiles/game.dir/src/Agent.cpp.i

CMakeFiles/game.dir/src/Agent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/Agent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Agent.cpp -o CMakeFiles/game.dir/src/Agent.cpp.s

CMakeFiles/game.dir/src/Agent.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/Agent.cpp.o.requires

CMakeFiles/game.dir/src/Agent.cpp.o.provides: CMakeFiles/game.dir/src/Agent.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/Agent.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/Agent.cpp.o.provides

CMakeFiles/game.dir/src/Agent.cpp.o.provides.build: CMakeFiles/game.dir/src/Agent.cpp.o


CMakeFiles/game.dir/src/Enemy.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/Enemy.cpp.o: ../src/Enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game.dir/src/Enemy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/Enemy.cpp.o -c /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Enemy.cpp

CMakeFiles/game.dir/src/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/Enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Enemy.cpp > CMakeFiles/game.dir/src/Enemy.cpp.i

CMakeFiles/game.dir/src/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/Enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Enemy.cpp -o CMakeFiles/game.dir/src/Enemy.cpp.s

CMakeFiles/game.dir/src/Enemy.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/Enemy.cpp.o.requires

CMakeFiles/game.dir/src/Enemy.cpp.o.provides: CMakeFiles/game.dir/src/Enemy.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/Enemy.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/Enemy.cpp.o.provides

CMakeFiles/game.dir/src/Enemy.cpp.o.provides.build: CMakeFiles/game.dir/src/Enemy.cpp.o


CMakeFiles/game.dir/src/Friendly.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/Friendly.cpp.o: ../src/Friendly.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/game.dir/src/Friendly.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/Friendly.cpp.o -c /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Friendly.cpp

CMakeFiles/game.dir/src/Friendly.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/Friendly.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Friendly.cpp > CMakeFiles/game.dir/src/Friendly.cpp.i

CMakeFiles/game.dir/src/Friendly.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/Friendly.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Friendly.cpp -o CMakeFiles/game.dir/src/Friendly.cpp.s

CMakeFiles/game.dir/src/Friendly.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/Friendly.cpp.o.requires

CMakeFiles/game.dir/src/Friendly.cpp.o.provides: CMakeFiles/game.dir/src/Friendly.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/Friendly.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/Friendly.cpp.o.provides

CMakeFiles/game.dir/src/Friendly.cpp.o.provides.build: CMakeFiles/game.dir/src/Friendly.cpp.o


CMakeFiles/game.dir/src/Level.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/Level.cpp.o: ../src/Level.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/game.dir/src/Level.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/Level.cpp.o -c /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Level.cpp

CMakeFiles/game.dir/src/Level.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/Level.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Level.cpp > CMakeFiles/game.dir/src/Level.cpp.i

CMakeFiles/game.dir/src/Level.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/Level.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Level.cpp -o CMakeFiles/game.dir/src/Level.cpp.s

CMakeFiles/game.dir/src/Level.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/Level.cpp.o.requires

CMakeFiles/game.dir/src/Level.cpp.o.provides: CMakeFiles/game.dir/src/Level.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/Level.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/Level.cpp.o.provides

CMakeFiles/game.dir/src/Level.cpp.o.provides.build: CMakeFiles/game.dir/src/Level.cpp.o


CMakeFiles/game.dir/src/MainGame.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/MainGame.cpp.o: ../src/MainGame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/game.dir/src/MainGame.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/MainGame.cpp.o -c /home/joshmin/Documents/Winter_Break_2017/GameProject/src/MainGame.cpp

CMakeFiles/game.dir/src/MainGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/MainGame.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joshmin/Documents/Winter_Break_2017/GameProject/src/MainGame.cpp > CMakeFiles/game.dir/src/MainGame.cpp.i

CMakeFiles/game.dir/src/MainGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/MainGame.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joshmin/Documents/Winter_Break_2017/GameProject/src/MainGame.cpp -o CMakeFiles/game.dir/src/MainGame.cpp.s

CMakeFiles/game.dir/src/MainGame.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/MainGame.cpp.o.requires

CMakeFiles/game.dir/src/MainGame.cpp.o.provides: CMakeFiles/game.dir/src/MainGame.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/MainGame.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/MainGame.cpp.o.provides

CMakeFiles/game.dir/src/MainGame.cpp.o.provides.build: CMakeFiles/game.dir/src/MainGame.cpp.o


CMakeFiles/game.dir/src/Player.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/game.dir/src/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/Player.cpp.o -c /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Player.cpp

CMakeFiles/game.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Player.cpp > CMakeFiles/game.dir/src/Player.cpp.i

CMakeFiles/game.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Player.cpp -o CMakeFiles/game.dir/src/Player.cpp.s

CMakeFiles/game.dir/src/Player.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/Player.cpp.o.requires

CMakeFiles/game.dir/src/Player.cpp.o.provides: CMakeFiles/game.dir/src/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/Player.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/Player.cpp.o.provides

CMakeFiles/game.dir/src/Player.cpp.o.provides.build: CMakeFiles/game.dir/src/Player.cpp.o


CMakeFiles/game.dir/src/Projectile.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/Projectile.cpp.o: ../src/Projectile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/game.dir/src/Projectile.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/Projectile.cpp.o -c /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Projectile.cpp

CMakeFiles/game.dir/src/Projectile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/Projectile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Projectile.cpp > CMakeFiles/game.dir/src/Projectile.cpp.i

CMakeFiles/game.dir/src/Projectile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/Projectile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joshmin/Documents/Winter_Break_2017/GameProject/src/Projectile.cpp -o CMakeFiles/game.dir/src/Projectile.cpp.s

CMakeFiles/game.dir/src/Projectile.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/Projectile.cpp.o.requires

CMakeFiles/game.dir/src/Projectile.cpp.o.provides: CMakeFiles/game.dir/src/Projectile.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/Projectile.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/Projectile.cpp.o.provides

CMakeFiles/game.dir/src/Projectile.cpp.o.provides.build: CMakeFiles/game.dir/src/Projectile.cpp.o


CMakeFiles/game.dir/src/main.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/game.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/main.cpp.o -c /home/joshmin/Documents/Winter_Break_2017/GameProject/src/main.cpp

CMakeFiles/game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joshmin/Documents/Winter_Break_2017/GameProject/src/main.cpp > CMakeFiles/game.dir/src/main.cpp.i

CMakeFiles/game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joshmin/Documents/Winter_Break_2017/GameProject/src/main.cpp -o CMakeFiles/game.dir/src/main.cpp.s

CMakeFiles/game.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/main.cpp.o.requires

CMakeFiles/game.dir/src/main.cpp.o.provides: CMakeFiles/game.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/main.cpp.o.provides

CMakeFiles/game.dir/src/main.cpp.o.provides.build: CMakeFiles/game.dir/src/main.cpp.o


# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/src/Agent.cpp.o" \
"CMakeFiles/game.dir/src/Enemy.cpp.o" \
"CMakeFiles/game.dir/src/Friendly.cpp.o" \
"CMakeFiles/game.dir/src/Level.cpp.o" \
"CMakeFiles/game.dir/src/MainGame.cpp.o" \
"CMakeFiles/game.dir/src/Player.cpp.o" \
"CMakeFiles/game.dir/src/Projectile.cpp.o" \
"CMakeFiles/game.dir/src/main.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

game: CMakeFiles/game.dir/src/Agent.cpp.o
game: CMakeFiles/game.dir/src/Enemy.cpp.o
game: CMakeFiles/game.dir/src/Friendly.cpp.o
game: CMakeFiles/game.dir/src/Level.cpp.o
game: CMakeFiles/game.dir/src/MainGame.cpp.o
game: CMakeFiles/game.dir/src/Player.cpp.o
game: CMakeFiles/game.dir/src/Projectile.cpp.o
game: CMakeFiles/game.dir/src/main.cpp.o
game: CMakeFiles/game.dir/build.make
game: Engine/libEngine.a
game: CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game.dir/build: game

.PHONY : CMakeFiles/game.dir/build

CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/Agent.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/Enemy.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/Friendly.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/Level.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/MainGame.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/Player.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/Projectile.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/game.dir/requires

CMakeFiles/game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game.dir/clean

CMakeFiles/game.dir/depend:
	cd /home/joshmin/Documents/Winter_Break_2017/GameProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joshmin/Documents/Winter_Break_2017/GameProject /home/joshmin/Documents/Winter_Break_2017/GameProject /home/joshmin/Documents/Winter_Break_2017/GameProject/build /home/joshmin/Documents/Winter_Break_2017/GameProject/build /home/joshmin/Documents/Winter_Break_2017/GameProject/build/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game.dir/depend
