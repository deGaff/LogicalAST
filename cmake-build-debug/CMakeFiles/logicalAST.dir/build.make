# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Stud\logicalAST

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Stud\logicalAST\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/logicalAST.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/logicalAST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/logicalAST.dir/flags.make

CMakeFiles/logicalAST.dir/main.cpp.obj: CMakeFiles/logicalAST.dir/flags.make
CMakeFiles/logicalAST.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Stud\logicalAST\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/logicalAST.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\logicalAST.dir\main.cpp.obj -c E:\Stud\logicalAST\main.cpp

CMakeFiles/logicalAST.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logicalAST.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Stud\logicalAST\main.cpp > CMakeFiles\logicalAST.dir\main.cpp.i

CMakeFiles/logicalAST.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logicalAST.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Stud\logicalAST\main.cpp -o CMakeFiles\logicalAST.dir\main.cpp.s

# Object files for target logicalAST
logicalAST_OBJECTS = \
"CMakeFiles/logicalAST.dir/main.cpp.obj"

# External object files for target logicalAST
logicalAST_EXTERNAL_OBJECTS =

logicalAST.exe: CMakeFiles/logicalAST.dir/main.cpp.obj
logicalAST.exe: CMakeFiles/logicalAST.dir/build.make
logicalAST.exe: CMakeFiles/logicalAST.dir/linklibs.rsp
logicalAST.exe: CMakeFiles/logicalAST.dir/objects1.rsp
logicalAST.exe: CMakeFiles/logicalAST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Stud\logicalAST\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable logicalAST.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\logicalAST.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/logicalAST.dir/build: logicalAST.exe
.PHONY : CMakeFiles/logicalAST.dir/build

CMakeFiles/logicalAST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\logicalAST.dir\cmake_clean.cmake
.PHONY : CMakeFiles/logicalAST.dir/clean

CMakeFiles/logicalAST.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Stud\logicalAST E:\Stud\logicalAST E:\Stud\logicalAST\cmake-build-debug E:\Stud\logicalAST\cmake-build-debug E:\Stud\logicalAST\cmake-build-debug\CMakeFiles\logicalAST.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/logicalAST.dir/depend

