# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/eltigro/development/c++/3Dtask

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eltigro/development/c++/3Dtask/build

# Include any dependencies generated for this target.
include libs/curves/CMakeFiles/CurvesLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/curves/CMakeFiles/CurvesLib.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/curves/CMakeFiles/CurvesLib.dir/progress.make

# Include the compile flags for this target's objects.
include libs/curves/CMakeFiles/CurvesLib.dir/flags.make

libs/curves/CMakeFiles/CurvesLib.dir/src/circle.cpp.o: libs/curves/CMakeFiles/CurvesLib.dir/flags.make
libs/curves/CMakeFiles/CurvesLib.dir/src/circle.cpp.o: ../libs/curves/src/circle.cpp
libs/curves/CMakeFiles/CurvesLib.dir/src/circle.cpp.o: libs/curves/CMakeFiles/CurvesLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eltigro/development/c++/3Dtask/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/curves/CMakeFiles/CurvesLib.dir/src/circle.cpp.o"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/curves/CMakeFiles/CurvesLib.dir/src/circle.cpp.o -MF CMakeFiles/CurvesLib.dir/src/circle.cpp.o.d -o CMakeFiles/CurvesLib.dir/src/circle.cpp.o -c /home/eltigro/development/c++/3Dtask/libs/curves/src/circle.cpp

libs/curves/CMakeFiles/CurvesLib.dir/src/circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CurvesLib.dir/src/circle.cpp.i"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eltigro/development/c++/3Dtask/libs/curves/src/circle.cpp > CMakeFiles/CurvesLib.dir/src/circle.cpp.i

libs/curves/CMakeFiles/CurvesLib.dir/src/circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CurvesLib.dir/src/circle.cpp.s"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eltigro/development/c++/3Dtask/libs/curves/src/circle.cpp -o CMakeFiles/CurvesLib.dir/src/circle.cpp.s

libs/curves/CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o: libs/curves/CMakeFiles/CurvesLib.dir/flags.make
libs/curves/CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o: ../libs/curves/src/ellipse.cpp
libs/curves/CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o: libs/curves/CMakeFiles/CurvesLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eltigro/development/c++/3Dtask/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/curves/CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/curves/CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o -MF CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o.d -o CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o -c /home/eltigro/development/c++/3Dtask/libs/curves/src/ellipse.cpp

libs/curves/CMakeFiles/CurvesLib.dir/src/ellipse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CurvesLib.dir/src/ellipse.cpp.i"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eltigro/development/c++/3Dtask/libs/curves/src/ellipse.cpp > CMakeFiles/CurvesLib.dir/src/ellipse.cpp.i

libs/curves/CMakeFiles/CurvesLib.dir/src/ellipse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CurvesLib.dir/src/ellipse.cpp.s"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eltigro/development/c++/3Dtask/libs/curves/src/ellipse.cpp -o CMakeFiles/CurvesLib.dir/src/ellipse.cpp.s

libs/curves/CMakeFiles/CurvesLib.dir/src/helix.cpp.o: libs/curves/CMakeFiles/CurvesLib.dir/flags.make
libs/curves/CMakeFiles/CurvesLib.dir/src/helix.cpp.o: ../libs/curves/src/helix.cpp
libs/curves/CMakeFiles/CurvesLib.dir/src/helix.cpp.o: libs/curves/CMakeFiles/CurvesLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eltigro/development/c++/3Dtask/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object libs/curves/CMakeFiles/CurvesLib.dir/src/helix.cpp.o"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/curves/CMakeFiles/CurvesLib.dir/src/helix.cpp.o -MF CMakeFiles/CurvesLib.dir/src/helix.cpp.o.d -o CMakeFiles/CurvesLib.dir/src/helix.cpp.o -c /home/eltigro/development/c++/3Dtask/libs/curves/src/helix.cpp

libs/curves/CMakeFiles/CurvesLib.dir/src/helix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CurvesLib.dir/src/helix.cpp.i"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eltigro/development/c++/3Dtask/libs/curves/src/helix.cpp > CMakeFiles/CurvesLib.dir/src/helix.cpp.i

libs/curves/CMakeFiles/CurvesLib.dir/src/helix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CurvesLib.dir/src/helix.cpp.s"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eltigro/development/c++/3Dtask/libs/curves/src/helix.cpp -o CMakeFiles/CurvesLib.dir/src/helix.cpp.s

# Object files for target CurvesLib
CurvesLib_OBJECTS = \
"CMakeFiles/CurvesLib.dir/src/circle.cpp.o" \
"CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o" \
"CMakeFiles/CurvesLib.dir/src/helix.cpp.o"

# External object files for target CurvesLib
CurvesLib_EXTERNAL_OBJECTS =

libs/curves/libcurves.so.1.0: libs/curves/CMakeFiles/CurvesLib.dir/src/circle.cpp.o
libs/curves/libcurves.so.1.0: libs/curves/CMakeFiles/CurvesLib.dir/src/ellipse.cpp.o
libs/curves/libcurves.so.1.0: libs/curves/CMakeFiles/CurvesLib.dir/src/helix.cpp.o
libs/curves/libcurves.so.1.0: libs/curves/CMakeFiles/CurvesLib.dir/build.make
libs/curves/libcurves.so.1.0: libs/curves/CMakeFiles/CurvesLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eltigro/development/c++/3Dtask/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libcurves.so"
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CurvesLib.dir/link.txt --verbose=$(VERBOSE)
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && $(CMAKE_COMMAND) -E cmake_symlink_library libcurves.so.1.0 libcurves.so.1.0 libcurves.so

libs/curves/libcurves.so: libs/curves/libcurves.so.1.0
	@$(CMAKE_COMMAND) -E touch_nocreate libs/curves/libcurves.so

# Rule to build all files generated by this target.
libs/curves/CMakeFiles/CurvesLib.dir/build: libs/curves/libcurves.so
.PHONY : libs/curves/CMakeFiles/CurvesLib.dir/build

libs/curves/CMakeFiles/CurvesLib.dir/clean:
	cd /home/eltigro/development/c++/3Dtask/build/libs/curves && $(CMAKE_COMMAND) -P CMakeFiles/CurvesLib.dir/cmake_clean.cmake
.PHONY : libs/curves/CMakeFiles/CurvesLib.dir/clean

libs/curves/CMakeFiles/CurvesLib.dir/depend:
	cd /home/eltigro/development/c++/3Dtask/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eltigro/development/c++/3Dtask /home/eltigro/development/c++/3Dtask/libs/curves /home/eltigro/development/c++/3Dtask/build /home/eltigro/development/c++/3Dtask/build/libs/curves /home/eltigro/development/c++/3Dtask/build/libs/curves/CMakeFiles/CurvesLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/curves/CMakeFiles/CurvesLib.dir/depend

