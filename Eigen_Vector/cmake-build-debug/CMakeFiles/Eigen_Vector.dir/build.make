# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/gravity/Downloads/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/gravity/Downloads/clion-2020.1.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/sda5/Numerical/Eigen_Vector

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/sda5/Numerical/Eigen_Vector/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Eigen_Vector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Eigen_Vector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Eigen_Vector.dir/flags.make

CMakeFiles/Eigen_Vector.dir/main.cpp.o: CMakeFiles/Eigen_Vector.dir/flags.make
CMakeFiles/Eigen_Vector.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/sda5/Numerical/Eigen_Vector/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Eigen_Vector.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Eigen_Vector.dir/main.cpp.o -c /mnt/sda5/Numerical/Eigen_Vector/main.cpp

CMakeFiles/Eigen_Vector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Eigen_Vector.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/sda5/Numerical/Eigen_Vector/main.cpp > CMakeFiles/Eigen_Vector.dir/main.cpp.i

CMakeFiles/Eigen_Vector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Eigen_Vector.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/sda5/Numerical/Eigen_Vector/main.cpp -o CMakeFiles/Eigen_Vector.dir/main.cpp.s

# Object files for target Eigen_Vector
Eigen_Vector_OBJECTS = \
"CMakeFiles/Eigen_Vector.dir/main.cpp.o"

# External object files for target Eigen_Vector
Eigen_Vector_EXTERNAL_OBJECTS =

Eigen_Vector: CMakeFiles/Eigen_Vector.dir/main.cpp.o
Eigen_Vector: CMakeFiles/Eigen_Vector.dir/build.make
Eigen_Vector: CMakeFiles/Eigen_Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/sda5/Numerical/Eigen_Vector/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Eigen_Vector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Eigen_Vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Eigen_Vector.dir/build: Eigen_Vector

.PHONY : CMakeFiles/Eigen_Vector.dir/build

CMakeFiles/Eigen_Vector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Eigen_Vector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Eigen_Vector.dir/clean

CMakeFiles/Eigen_Vector.dir/depend:
	cd /mnt/sda5/Numerical/Eigen_Vector/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/sda5/Numerical/Eigen_Vector /mnt/sda5/Numerical/Eigen_Vector /mnt/sda5/Numerical/Eigen_Vector/cmake-build-debug /mnt/sda5/Numerical/Eigen_Vector/cmake-build-debug /mnt/sda5/Numerical/Eigen_Vector/cmake-build-debug/CMakeFiles/Eigen_Vector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Eigen_Vector.dir/depend

