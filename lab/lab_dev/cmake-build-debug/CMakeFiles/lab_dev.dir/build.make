# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/anton/Downloads/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/anton/Downloads/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anton/CPP/lab/lab_dev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/CPP/lab/lab_dev/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab_dev.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab_dev.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_dev.dir/flags.make

CMakeFiles/lab_dev.dir/main.cpp.o: CMakeFiles/lab_dev.dir/flags.make
CMakeFiles/lab_dev.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/CPP/lab/lab_dev/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab_dev.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_dev.dir/main.cpp.o -c /home/anton/CPP/lab/lab_dev/main.cpp

CMakeFiles/lab_dev.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_dev.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/CPP/lab/lab_dev/main.cpp > CMakeFiles/lab_dev.dir/main.cpp.i

CMakeFiles/lab_dev.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_dev.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/CPP/lab/lab_dev/main.cpp -o CMakeFiles/lab_dev.dir/main.cpp.s

CMakeFiles/lab_dev.dir/libs/libs.cpp.o: CMakeFiles/lab_dev.dir/flags.make
CMakeFiles/lab_dev.dir/libs/libs.cpp.o: ../libs/libs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/CPP/lab/lab_dev/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab_dev.dir/libs/libs.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_dev.dir/libs/libs.cpp.o -c /home/anton/CPP/lab/lab_dev/libs/libs.cpp

CMakeFiles/lab_dev.dir/libs/libs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_dev.dir/libs/libs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/CPP/lab/lab_dev/libs/libs.cpp > CMakeFiles/lab_dev.dir/libs/libs.cpp.i

CMakeFiles/lab_dev.dir/libs/libs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_dev.dir/libs/libs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/CPP/lab/lab_dev/libs/libs.cpp -o CMakeFiles/lab_dev.dir/libs/libs.cpp.s

CMakeFiles/lab_dev.dir/libs/marr.cpp.o: CMakeFiles/lab_dev.dir/flags.make
CMakeFiles/lab_dev.dir/libs/marr.cpp.o: ../libs/marr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/CPP/lab/lab_dev/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab_dev.dir/libs/marr.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_dev.dir/libs/marr.cpp.o -c /home/anton/CPP/lab/lab_dev/libs/marr.cpp

CMakeFiles/lab_dev.dir/libs/marr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_dev.dir/libs/marr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/CPP/lab/lab_dev/libs/marr.cpp > CMakeFiles/lab_dev.dir/libs/marr.cpp.i

CMakeFiles/lab_dev.dir/libs/marr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_dev.dir/libs/marr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/CPP/lab/lab_dev/libs/marr.cpp -o CMakeFiles/lab_dev.dir/libs/marr.cpp.s

CMakeFiles/lab_dev.dir/libs/libs_2.cpp.o: CMakeFiles/lab_dev.dir/flags.make
CMakeFiles/lab_dev.dir/libs/libs_2.cpp.o: ../libs/libs_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/CPP/lab/lab_dev/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab_dev.dir/libs/libs_2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_dev.dir/libs/libs_2.cpp.o -c /home/anton/CPP/lab/lab_dev/libs/libs_2.cpp

CMakeFiles/lab_dev.dir/libs/libs_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_dev.dir/libs/libs_2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/CPP/lab/lab_dev/libs/libs_2.cpp > CMakeFiles/lab_dev.dir/libs/libs_2.cpp.i

CMakeFiles/lab_dev.dir/libs/libs_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_dev.dir/libs/libs_2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/CPP/lab/lab_dev/libs/libs_2.cpp -o CMakeFiles/lab_dev.dir/libs/libs_2.cpp.s

# Object files for target lab_dev
lab_dev_OBJECTS = \
"CMakeFiles/lab_dev.dir/main.cpp.o" \
"CMakeFiles/lab_dev.dir/libs/libs.cpp.o" \
"CMakeFiles/lab_dev.dir/libs/marr.cpp.o" \
"CMakeFiles/lab_dev.dir/libs/libs_2.cpp.o"

# External object files for target lab_dev
lab_dev_EXTERNAL_OBJECTS =

lab_dev: CMakeFiles/lab_dev.dir/main.cpp.o
lab_dev: CMakeFiles/lab_dev.dir/libs/libs.cpp.o
lab_dev: CMakeFiles/lab_dev.dir/libs/marr.cpp.o
lab_dev: CMakeFiles/lab_dev.dir/libs/libs_2.cpp.o
lab_dev: CMakeFiles/lab_dev.dir/build.make
lab_dev: CMakeFiles/lab_dev.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anton/CPP/lab/lab_dev/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable lab_dev"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_dev.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_dev.dir/build: lab_dev

.PHONY : CMakeFiles/lab_dev.dir/build

CMakeFiles/lab_dev.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab_dev.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab_dev.dir/clean

CMakeFiles/lab_dev.dir/depend:
	cd /home/anton/CPP/lab/lab_dev/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/CPP/lab/lab_dev /home/anton/CPP/lab/lab_dev /home/anton/CPP/lab/lab_dev/cmake-build-debug /home/anton/CPP/lab/lab_dev/cmake-build-debug /home/anton/CPP/lab/lab_dev/cmake-build-debug/CMakeFiles/lab_dev.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_dev.dir/depend

