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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/itollett/cpp/day03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/itollett/cpp/day03/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/day03.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/day03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/day03.dir/flags.make

CMakeFiles/day03.dir/ex00/FragTrap.cpp.o: CMakeFiles/day03.dir/flags.make
CMakeFiles/day03.dir/ex00/FragTrap.cpp.o: ../ex00/FragTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/itollett/cpp/day03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/day03.dir/ex00/FragTrap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/day03.dir/ex00/FragTrap.cpp.o -c /Users/itollett/cpp/day03/ex00/FragTrap.cpp

CMakeFiles/day03.dir/ex00/FragTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/day03.dir/ex00/FragTrap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/itollett/cpp/day03/ex00/FragTrap.cpp > CMakeFiles/day03.dir/ex00/FragTrap.cpp.i

CMakeFiles/day03.dir/ex00/FragTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/day03.dir/ex00/FragTrap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/itollett/cpp/day03/ex00/FragTrap.cpp -o CMakeFiles/day03.dir/ex00/FragTrap.cpp.s

CMakeFiles/day03.dir/ex00/main.cpp.o: CMakeFiles/day03.dir/flags.make
CMakeFiles/day03.dir/ex00/main.cpp.o: ../ex00/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/itollett/cpp/day03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/day03.dir/ex00/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/day03.dir/ex00/main.cpp.o -c /Users/itollett/cpp/day03/ex00/main.cpp

CMakeFiles/day03.dir/ex00/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/day03.dir/ex00/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/itollett/cpp/day03/ex00/main.cpp > CMakeFiles/day03.dir/ex00/main.cpp.i

CMakeFiles/day03.dir/ex00/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/day03.dir/ex00/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/itollett/cpp/day03/ex00/main.cpp -o CMakeFiles/day03.dir/ex00/main.cpp.s

# Object files for target day03
day03_OBJECTS = \
"CMakeFiles/day03.dir/ex00/FragTrap.cpp.o" \
"CMakeFiles/day03.dir/ex00/main.cpp.o"

# External object files for target day03
day03_EXTERNAL_OBJECTS =

day03: CMakeFiles/day03.dir/ex00/FragTrap.cpp.o
day03: CMakeFiles/day03.dir/ex00/main.cpp.o
day03: CMakeFiles/day03.dir/build.make
day03: CMakeFiles/day03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/itollett/cpp/day03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable day03"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/day03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/day03.dir/build: day03

.PHONY : CMakeFiles/day03.dir/build

CMakeFiles/day03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/day03.dir/cmake_clean.cmake
.PHONY : CMakeFiles/day03.dir/clean

CMakeFiles/day03.dir/depend:
	cd /Users/itollett/cpp/day03/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/itollett/cpp/day03 /Users/itollett/cpp/day03 /Users/itollett/cpp/day03/cmake-build-debug /Users/itollett/cpp/day03/cmake-build-debug /Users/itollett/cpp/day03/cmake-build-debug/CMakeFiles/day03.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/day03.dir/depend

