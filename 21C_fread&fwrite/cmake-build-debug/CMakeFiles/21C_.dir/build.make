# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C_topic\21C_

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C_topic\21C_\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/21C_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/21C_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/21C_.dir/flags.make

CMakeFiles/21C_.dir/main.c.obj: CMakeFiles/21C_.dir/flags.make
CMakeFiles/21C_.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C_topic\21C_\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/21C_.dir/main.c.obj"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\21C_.dir\main.c.obj   -c D:\C_topic\21C_\main.c

CMakeFiles/21C_.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/21C_.dir/main.c.i"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C_topic\21C_\main.c > CMakeFiles\21C_.dir\main.c.i

CMakeFiles/21C_.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/21C_.dir/main.c.s"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C_topic\21C_\main.c -o CMakeFiles\21C_.dir\main.c.s

# Object files for target 21C_
21C__OBJECTS = \
"CMakeFiles/21C_.dir/main.c.obj"

# External object files for target 21C_
21C__EXTERNAL_OBJECTS =

21C_.exe: CMakeFiles/21C_.dir/main.c.obj
21C_.exe: CMakeFiles/21C_.dir/build.make
21C_.exe: CMakeFiles/21C_.dir/linklibs.rsp
21C_.exe: CMakeFiles/21C_.dir/objects1.rsp
21C_.exe: CMakeFiles/21C_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C_topic\21C_\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 21C_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\21C_.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/21C_.dir/build: 21C_.exe

.PHONY : CMakeFiles/21C_.dir/build

CMakeFiles/21C_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\21C_.dir\cmake_clean.cmake
.PHONY : CMakeFiles/21C_.dir/clean

CMakeFiles/21C_.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C_topic\21C_ D:\C_topic\21C_ D:\C_topic\21C_\cmake-build-debug D:\C_topic\21C_\cmake-build-debug D:\C_topic\21C_\cmake-build-debug\CMakeFiles\21C_.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/21C_.dir/depend

