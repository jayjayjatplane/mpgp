# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jayjayjatplane/mpgp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jayjayjatplane/mpgp/build

# Include any dependencies generated for this target.
include pokemon/run/CMakeFiles/run.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include pokemon/run/CMakeFiles/run.dir/compiler_depend.make

# Include the progress variables for this target.
include pokemon/run/CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include pokemon/run/CMakeFiles/run.dir/flags.make

pokemon/run/CMakeFiles/run.dir/main.cpp.o: pokemon/run/CMakeFiles/run.dir/flags.make
pokemon/run/CMakeFiles/run.dir/main.cpp.o: /home/jayjayjatplane/mpgp/pokemon/run/main.cpp
pokemon/run/CMakeFiles/run.dir/main.cpp.o: pokemon/run/CMakeFiles/run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jayjayjatplane/mpgp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object pokemon/run/CMakeFiles/run.dir/main.cpp.o"
	cd /home/jayjayjatplane/mpgp/build/pokemon/run && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pokemon/run/CMakeFiles/run.dir/main.cpp.o -MF CMakeFiles/run.dir/main.cpp.o.d -o CMakeFiles/run.dir/main.cpp.o -c /home/jayjayjatplane/mpgp/pokemon/run/main.cpp

pokemon/run/CMakeFiles/run.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/run.dir/main.cpp.i"
	cd /home/jayjayjatplane/mpgp/build/pokemon/run && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jayjayjatplane/mpgp/pokemon/run/main.cpp > CMakeFiles/run.dir/main.cpp.i

pokemon/run/CMakeFiles/run.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/run.dir/main.cpp.s"
	cd /home/jayjayjatplane/mpgp/build/pokemon/run && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jayjayjatplane/mpgp/pokemon/run/main.cpp -o CMakeFiles/run.dir/main.cpp.s

# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/main.cpp.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

pokemon/run/run: pokemon/run/CMakeFiles/run.dir/main.cpp.o
pokemon/run/run: pokemon/run/CMakeFiles/run.dir/build.make
pokemon/run/run: pokemon/game/libgame.a
pokemon/run/run: pokemon/run/CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jayjayjatplane/mpgp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable run"
	cd /home/jayjayjatplane/mpgp/build/pokemon/run && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
pokemon/run/CMakeFiles/run.dir/build: pokemon/run/run
.PHONY : pokemon/run/CMakeFiles/run.dir/build

pokemon/run/CMakeFiles/run.dir/clean:
	cd /home/jayjayjatplane/mpgp/build/pokemon/run && $(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : pokemon/run/CMakeFiles/run.dir/clean

pokemon/run/CMakeFiles/run.dir/depend:
	cd /home/jayjayjatplane/mpgp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jayjayjatplane/mpgp /home/jayjayjatplane/mpgp/pokemon/run /home/jayjayjatplane/mpgp/build /home/jayjayjatplane/mpgp/build/pokemon/run /home/jayjayjatplane/mpgp/build/pokemon/run/CMakeFiles/run.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : pokemon/run/CMakeFiles/run.dir/depend

