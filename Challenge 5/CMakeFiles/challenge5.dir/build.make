# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = "/home/maxime/dev/daieeecode2017/Challenge 5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/maxime/dev/daieeecode2017/Challenge 5"

# Include any dependencies generated for this target.
include CMakeFiles/challenge5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/challenge5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/challenge5.dir/flags.make

CMakeFiles/challenge5.dir/main.cpp.o: CMakeFiles/challenge5.dir/flags.make
CMakeFiles/challenge5.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/maxime/dev/daieeecode2017/Challenge 5/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/challenge5.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wall -pg -o CMakeFiles/challenge5.dir/main.cpp.o -c "/home/maxime/dev/daieeecode2017/Challenge 5/main.cpp"

CMakeFiles/challenge5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/challenge5.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wall -pg -E "/home/maxime/dev/daieeecode2017/Challenge 5/main.cpp" > CMakeFiles/challenge5.dir/main.cpp.i

CMakeFiles/challenge5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/challenge5.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wall -pg -S "/home/maxime/dev/daieeecode2017/Challenge 5/main.cpp" -o CMakeFiles/challenge5.dir/main.cpp.s

CMakeFiles/challenge5.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/challenge5.dir/main.cpp.o.requires

CMakeFiles/challenge5.dir/main.cpp.o.provides: CMakeFiles/challenge5.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/challenge5.dir/build.make CMakeFiles/challenge5.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/challenge5.dir/main.cpp.o.provides

CMakeFiles/challenge5.dir/main.cpp.o.provides.build: CMakeFiles/challenge5.dir/main.cpp.o


# Object files for target challenge5
challenge5_OBJECTS = \
"CMakeFiles/challenge5.dir/main.cpp.o"

# External object files for target challenge5
challenge5_EXTERNAL_OBJECTS =

challenge5: CMakeFiles/challenge5.dir/main.cpp.o
challenge5: CMakeFiles/challenge5.dir/build.make
challenge5: CMakeFiles/challenge5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/maxime/dev/daieeecode2017/Challenge 5/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable challenge5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/challenge5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/challenge5.dir/build: challenge5

.PHONY : CMakeFiles/challenge5.dir/build

CMakeFiles/challenge5.dir/requires: CMakeFiles/challenge5.dir/main.cpp.o.requires

.PHONY : CMakeFiles/challenge5.dir/requires

CMakeFiles/challenge5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/challenge5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/challenge5.dir/clean

CMakeFiles/challenge5.dir/depend:
	cd "/home/maxime/dev/daieeecode2017/Challenge 5" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/maxime/dev/daieeecode2017/Challenge 5" "/home/maxime/dev/daieeecode2017/Challenge 5" "/home/maxime/dev/daieeecode2017/Challenge 5" "/home/maxime/dev/daieeecode2017/Challenge 5" "/home/maxime/dev/daieeecode2017/Challenge 5/CMakeFiles/challenge5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/challenge5.dir/depend

