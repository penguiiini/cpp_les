# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/mipper/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/mipper/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mipper/CLionProjects/0412_lesson

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mipper/CLionProjects/0412_lesson/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0412_lesson.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/0412_lesson.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0412_lesson.dir/flags.make

CMakeFiles/0412_lesson.dir/main.cpp.o: CMakeFiles/0412_lesson.dir/flags.make
CMakeFiles/0412_lesson.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mipper/CLionProjects/0412_lesson/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0412_lesson.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/0412_lesson.dir/main.cpp.o -c /home/mipper/CLionProjects/0412_lesson/main.cpp

CMakeFiles/0412_lesson.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0412_lesson.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mipper/CLionProjects/0412_lesson/main.cpp > CMakeFiles/0412_lesson.dir/main.cpp.i

CMakeFiles/0412_lesson.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0412_lesson.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mipper/CLionProjects/0412_lesson/main.cpp -o CMakeFiles/0412_lesson.dir/main.cpp.s

# Object files for target 0412_lesson
0412_lesson_OBJECTS = \
"CMakeFiles/0412_lesson.dir/main.cpp.o"

# External object files for target 0412_lesson
0412_lesson_EXTERNAL_OBJECTS =

0412_lesson: CMakeFiles/0412_lesson.dir/main.cpp.o
0412_lesson: CMakeFiles/0412_lesson.dir/build.make
0412_lesson: CMakeFiles/0412_lesson.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mipper/CLionProjects/0412_lesson/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0412_lesson"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/0412_lesson.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0412_lesson.dir/build: 0412_lesson
.PHONY : CMakeFiles/0412_lesson.dir/build

CMakeFiles/0412_lesson.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/0412_lesson.dir/cmake_clean.cmake
.PHONY : CMakeFiles/0412_lesson.dir/clean

CMakeFiles/0412_lesson.dir/depend:
	cd /home/mipper/CLionProjects/0412_lesson/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mipper/CLionProjects/0412_lesson /home/mipper/CLionProjects/0412_lesson /home/mipper/CLionProjects/0412_lesson/cmake-build-debug /home/mipper/CLionProjects/0412_lesson/cmake-build-debug /home/mipper/CLionProjects/0412_lesson/cmake-build-debug/CMakeFiles/0412_lesson.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0412_lesson.dir/depend
