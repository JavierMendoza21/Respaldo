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
CMAKE_SOURCE_DIR = /home/javier/CLionProjects/circunferencia

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/javier/CLionProjects/circunferencia/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/circunferencia.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/circunferencia.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/circunferencia.dir/flags.make

CMakeFiles/circunferencia.dir/main.c.o: CMakeFiles/circunferencia.dir/flags.make
CMakeFiles/circunferencia.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/javier/CLionProjects/circunferencia/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/circunferencia.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/circunferencia.dir/main.c.o   -c /home/javier/CLionProjects/circunferencia/main.c

CMakeFiles/circunferencia.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/circunferencia.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/javier/CLionProjects/circunferencia/main.c > CMakeFiles/circunferencia.dir/main.c.i

CMakeFiles/circunferencia.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/circunferencia.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/javier/CLionProjects/circunferencia/main.c -o CMakeFiles/circunferencia.dir/main.c.s

# Object files for target circunferencia
circunferencia_OBJECTS = \
"CMakeFiles/circunferencia.dir/main.c.o"

# External object files for target circunferencia
circunferencia_EXTERNAL_OBJECTS =

circunferencia: CMakeFiles/circunferencia.dir/main.c.o
circunferencia: CMakeFiles/circunferencia.dir/build.make
circunferencia: CMakeFiles/circunferencia.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/javier/CLionProjects/circunferencia/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable circunferencia"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/circunferencia.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/circunferencia.dir/build: circunferencia

.PHONY : CMakeFiles/circunferencia.dir/build

CMakeFiles/circunferencia.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/circunferencia.dir/cmake_clean.cmake
.PHONY : CMakeFiles/circunferencia.dir/clean

CMakeFiles/circunferencia.dir/depend:
	cd /home/javier/CLionProjects/circunferencia/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/javier/CLionProjects/circunferencia /home/javier/CLionProjects/circunferencia /home/javier/CLionProjects/circunferencia/cmake-build-debug /home/javier/CLionProjects/circunferencia/cmake-build-debug /home/javier/CLionProjects/circunferencia/cmake-build-debug/CMakeFiles/circunferencia.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/circunferencia.dir/depend

