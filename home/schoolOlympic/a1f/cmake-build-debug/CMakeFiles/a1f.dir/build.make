# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/anton/Загрузки/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/anton/Загрузки/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anton/CPP/home/schoolOlympic/a1f

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/CPP/home/schoolOlympic/a1f/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/a1f.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a1f.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a1f.dir/flags.make

CMakeFiles/a1f.dir/main.cpp.o: CMakeFiles/a1f.dir/flags.make
CMakeFiles/a1f.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/CPP/home/schoolOlympic/a1f/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a1f.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a1f.dir/main.cpp.o -c /home/anton/CPP/home/schoolOlympic/a1f/main.cpp

CMakeFiles/a1f.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a1f.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/CPP/home/schoolOlympic/a1f/main.cpp > CMakeFiles/a1f.dir/main.cpp.i

CMakeFiles/a1f.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a1f.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/CPP/home/schoolOlympic/a1f/main.cpp -o CMakeFiles/a1f.dir/main.cpp.s

CMakeFiles/a1f.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/a1f.dir/main.cpp.o.requires

CMakeFiles/a1f.dir/main.cpp.o.provides: CMakeFiles/a1f.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/a1f.dir/build.make CMakeFiles/a1f.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/a1f.dir/main.cpp.o.provides

CMakeFiles/a1f.dir/main.cpp.o.provides.build: CMakeFiles/a1f.dir/main.cpp.o


# Object files for target a1f
a1f_OBJECTS = \
"CMakeFiles/a1f.dir/main.cpp.o"

# External object files for target a1f
a1f_EXTERNAL_OBJECTS =

a1f: CMakeFiles/a1f.dir/main.cpp.o
a1f: CMakeFiles/a1f.dir/build.make
a1f: CMakeFiles/a1f.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anton/CPP/home/schoolOlympic/a1f/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable a1f"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a1f.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a1f.dir/build: a1f

.PHONY : CMakeFiles/a1f.dir/build

CMakeFiles/a1f.dir/requires: CMakeFiles/a1f.dir/main.cpp.o.requires

.PHONY : CMakeFiles/a1f.dir/requires

CMakeFiles/a1f.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a1f.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a1f.dir/clean

CMakeFiles/a1f.dir/depend:
	cd /home/anton/CPP/home/schoolOlympic/a1f/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/CPP/home/schoolOlympic/a1f /home/anton/CPP/home/schoolOlympic/a1f /home/anton/CPP/home/schoolOlympic/a1f/cmake-build-debug /home/anton/CPP/home/schoolOlympic/a1f/cmake-build-debug /home/anton/CPP/home/schoolOlympic/a1f/cmake-build-debug/CMakeFiles/a1f.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a1f.dir/depend

