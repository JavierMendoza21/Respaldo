# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/javier/CLionProjects/conversoSN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/javier/CLionProjects/conversoSN/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/conversoSN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/conversoSN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/conversoSN.dir/flags.make

CMakeFiles/conversoSN.dir/main.c.o: CMakeFiles/conversoSN.dir/flags.make
CMakeFiles/conversoSN.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/javier/CLionProjects/conversoSN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/conversoSN.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/conversoSN.dir/main.c.o   -c /home/javier/CLionProjects/conversoSN/main.c

CMakeFiles/conversoSN.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/conversoSN.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/javier/CLionProjects/conversoSN/main.c > CMakeFiles/conversoSN.dir/main.c.i

CMakeFiles/conversoSN.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/conversoSN.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/javier/CLionProjects/conversoSN/main.c -o CMakeFiles/conversoSN.dir/main.c.s

# Object files for target conversoSN
conversoSN_OBJECTS = \
"CMakeFiles/conversoSN.dir/main.c.o"

# External object files for target conversoSN
conversoSN_EXTERNAL_OBJECTS =

conversoSN: CMakeFiles/conversoSN.dir/main.c.o
conversoSN: CMakeFiles/conversoSN.dir/build.make
conversoSN: CMakeFiles/conversoSN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/javier/CLionProjects/conversoSN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable conversoSN"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/conversoSN.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/conversoSN.dir/build: conversoSN

.PHONY : CMakeFiles/conversoSN.dir/build

CMakeFiles/conversoSN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/conversoSN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/conversoSN.dir/clean

CMakeFiles/conversoSN.dir/depend:
	cd /home/javier/CLionProjects/conversoSN/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/javier/CLionProjects/conversoSN /home/javier/CLionProjects/conversoSN /home/javier/CLionProjects/conversoSN/cmake-build-debug /home/javier/CLionProjects/conversoSN/cmake-build-debug /home/javier/CLionProjects/conversoSN/cmake-build-debug/CMakeFiles/conversoSN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/conversoSN.dir/depend

