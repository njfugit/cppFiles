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
CMAKE_SOURCE_DIR = /home/nijun/Documents/cppFiles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nijun/Documents/cppFiles/build

# Include any dependencies generated for this target.
include CMakeFiles/Class2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Class2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Class2.dir/flags.make

CMakeFiles/Class2.dir/Class2.cpp.o: CMakeFiles/Class2.dir/flags.make
CMakeFiles/Class2.dir/Class2.cpp.o: ../Class2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nijun/Documents/cppFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Class2.dir/Class2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Class2.dir/Class2.cpp.o -c /home/nijun/Documents/cppFiles/Class2.cpp

CMakeFiles/Class2.dir/Class2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Class2.dir/Class2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nijun/Documents/cppFiles/Class2.cpp > CMakeFiles/Class2.dir/Class2.cpp.i

CMakeFiles/Class2.dir/Class2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Class2.dir/Class2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nijun/Documents/cppFiles/Class2.cpp -o CMakeFiles/Class2.dir/Class2.cpp.s

CMakeFiles/Class2.dir/Class2.cpp.o.requires:

.PHONY : CMakeFiles/Class2.dir/Class2.cpp.o.requires

CMakeFiles/Class2.dir/Class2.cpp.o.provides: CMakeFiles/Class2.dir/Class2.cpp.o.requires
	$(MAKE) -f CMakeFiles/Class2.dir/build.make CMakeFiles/Class2.dir/Class2.cpp.o.provides.build
.PHONY : CMakeFiles/Class2.dir/Class2.cpp.o.provides

CMakeFiles/Class2.dir/Class2.cpp.o.provides.build: CMakeFiles/Class2.dir/Class2.cpp.o


CMakeFiles/Class2.dir/src/Time.cpp.o: CMakeFiles/Class2.dir/flags.make
CMakeFiles/Class2.dir/src/Time.cpp.o: ../src/Time.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nijun/Documents/cppFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Class2.dir/src/Time.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Class2.dir/src/Time.cpp.o -c /home/nijun/Documents/cppFiles/src/Time.cpp

CMakeFiles/Class2.dir/src/Time.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Class2.dir/src/Time.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nijun/Documents/cppFiles/src/Time.cpp > CMakeFiles/Class2.dir/src/Time.cpp.i

CMakeFiles/Class2.dir/src/Time.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Class2.dir/src/Time.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nijun/Documents/cppFiles/src/Time.cpp -o CMakeFiles/Class2.dir/src/Time.cpp.s

CMakeFiles/Class2.dir/src/Time.cpp.o.requires:

.PHONY : CMakeFiles/Class2.dir/src/Time.cpp.o.requires

CMakeFiles/Class2.dir/src/Time.cpp.o.provides: CMakeFiles/Class2.dir/src/Time.cpp.o.requires
	$(MAKE) -f CMakeFiles/Class2.dir/build.make CMakeFiles/Class2.dir/src/Time.cpp.o.provides.build
.PHONY : CMakeFiles/Class2.dir/src/Time.cpp.o.provides

CMakeFiles/Class2.dir/src/Time.cpp.o.provides.build: CMakeFiles/Class2.dir/src/Time.cpp.o


# Object files for target Class2
Class2_OBJECTS = \
"CMakeFiles/Class2.dir/Class2.cpp.o" \
"CMakeFiles/Class2.dir/src/Time.cpp.o"

# External object files for target Class2
Class2_EXTERNAL_OBJECTS =

Class2: CMakeFiles/Class2.dir/Class2.cpp.o
Class2: CMakeFiles/Class2.dir/src/Time.cpp.o
Class2: CMakeFiles/Class2.dir/build.make
Class2: CMakeFiles/Class2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nijun/Documents/cppFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Class2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Class2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Class2.dir/build: Class2

.PHONY : CMakeFiles/Class2.dir/build

CMakeFiles/Class2.dir/requires: CMakeFiles/Class2.dir/Class2.cpp.o.requires
CMakeFiles/Class2.dir/requires: CMakeFiles/Class2.dir/src/Time.cpp.o.requires

.PHONY : CMakeFiles/Class2.dir/requires

CMakeFiles/Class2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Class2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Class2.dir/clean

CMakeFiles/Class2.dir/depend:
	cd /home/nijun/Documents/cppFiles/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nijun/Documents/cppFiles /home/nijun/Documents/cppFiles /home/nijun/Documents/cppFiles/build /home/nijun/Documents/cppFiles/build /home/nijun/Documents/cppFiles/build/CMakeFiles/Class2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Class2.dir/depend

