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
CMAKE_SOURCE_DIR = /home/javier/CLionProjects/bluetooth

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/javier/CLionProjects/bluetooth/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bluetooth.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bluetooth.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bluetooth.dir/flags.make

CMakeFiles/bluetooth.dir/main.c.o: CMakeFiles/bluetooth.dir/flags.make
CMakeFiles/bluetooth.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/javier/CLionProjects/bluetooth/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bluetooth.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bluetooth.dir/main.c.o   -c /home/javier/CLionProjects/bluetooth/main.c

CMakeFiles/bluetooth.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bluetooth.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/javier/CLionProjects/bluetooth/main.c > CMakeFiles/bluetooth.dir/main.c.i

CMakeFiles/bluetooth.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bluetooth.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/javier/CLionProjects/bluetooth/main.c -o CMakeFiles/bluetooth.dir/main.c.s

# Object files for target bluetooth
bluetooth_OBJECTS = \
"CMakeFiles/bluetooth.dir/main.c.o"

# External object files for target bluetooth
bluetooth_EXTERNAL_OBJECTS =

bluetooth: CMakeFiles/bluetooth.dir/main.c.o
bluetooth: CMakeFiles/bluetooth.dir/build.make
bluetooth: CMakeFiles/bluetooth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/javier/CLionProjects/bluetooth/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bluetooth"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bluetooth.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bluetooth.dir/build: bluetooth

.PHONY : CMakeFiles/bluetooth.dir/build

CMakeFiles/bluetooth.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bluetooth.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bluetooth.dir/clean

CMakeFiles/bluetooth.dir/depend:
	cd /home/javier/CLionProjects/bluetooth/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/javier/CLionProjects/bluetooth /home/javier/CLionProjects/bluetooth /home/javier/CLionProjects/bluetooth/cmake-build-debug /home/javier/CLionProjects/bluetooth/cmake-build-debug /home/javier/CLionProjects/bluetooth/cmake-build-debug/CMakeFiles/bluetooth.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bluetooth.dir/depend

