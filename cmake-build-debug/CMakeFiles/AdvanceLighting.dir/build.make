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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/KsGin/Documents/GraphicsAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/KsGin/Documents/GraphicsAlgorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AdvanceLighting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AdvanceLighting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AdvanceLighting.dir/flags.make

CMakeFiles/AdvanceLighting.dir/main.cpp.o: CMakeFiles/AdvanceLighting.dir/flags.make
CMakeFiles/AdvanceLighting.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/KsGin/Documents/GraphicsAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AdvanceLighting.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AdvanceLighting.dir/main.cpp.o -c /Users/KsGin/Documents/GraphicsAlgorithm/main.cpp

CMakeFiles/AdvanceLighting.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdvanceLighting.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/KsGin/Documents/GraphicsAlgorithm/main.cpp > CMakeFiles/AdvanceLighting.dir/main.cpp.i

CMakeFiles/AdvanceLighting.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdvanceLighting.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/KsGin/Documents/GraphicsAlgorithm/main.cpp -o CMakeFiles/AdvanceLighting.dir/main.cpp.s

CMakeFiles/AdvanceLighting.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/AdvanceLighting.dir/main.cpp.o.requires

CMakeFiles/AdvanceLighting.dir/main.cpp.o.provides: CMakeFiles/AdvanceLighting.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/AdvanceLighting.dir/build.make CMakeFiles/AdvanceLighting.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/AdvanceLighting.dir/main.cpp.o.provides

CMakeFiles/AdvanceLighting.dir/main.cpp.o.provides.build: CMakeFiles/AdvanceLighting.dir/main.cpp.o


# Object files for target AdvanceLighting
AdvanceLighting_OBJECTS = \
"CMakeFiles/AdvanceLighting.dir/main.cpp.o"

# External object files for target AdvanceLighting
AdvanceLighting_EXTERNAL_OBJECTS =

AdvanceLighting: CMakeFiles/AdvanceLighting.dir/main.cpp.o
AdvanceLighting: CMakeFiles/AdvanceLighting.dir/build.make
AdvanceLighting: /usr/local/lib/libglfw.dylib
AdvanceLighting: /usr/local/lib/libGLEW.dylib
AdvanceLighting: CMakeFiles/AdvanceLighting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/KsGin/Documents/GraphicsAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AdvanceLighting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AdvanceLighting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AdvanceLighting.dir/build: AdvanceLighting

.PHONY : CMakeFiles/AdvanceLighting.dir/build

CMakeFiles/AdvanceLighting.dir/requires: CMakeFiles/AdvanceLighting.dir/main.cpp.o.requires

.PHONY : CMakeFiles/AdvanceLighting.dir/requires

CMakeFiles/AdvanceLighting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AdvanceLighting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AdvanceLighting.dir/clean

CMakeFiles/AdvanceLighting.dir/depend:
	cd /Users/KsGin/Documents/GraphicsAlgorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/KsGin/Documents/GraphicsAlgorithm /Users/KsGin/Documents/GraphicsAlgorithm /Users/KsGin/Documents/GraphicsAlgorithm/cmake-build-debug /Users/KsGin/Documents/GraphicsAlgorithm/cmake-build-debug /Users/KsGin/Documents/GraphicsAlgorithm/cmake-build-debug/CMakeFiles/AdvanceLighting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AdvanceLighting.dir/depend

