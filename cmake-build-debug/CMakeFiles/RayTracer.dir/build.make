# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/michael/Documents/Projects/RayTracer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/michael/Documents/Projects/RayTracer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RayTracer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RayTracer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RayTracer.dir/flags.make

CMakeFiles/RayTracer.dir/Camera.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Camera.cpp.o: ../Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RayTracer.dir/Camera.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Camera.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Camera.cpp

CMakeFiles/RayTracer.dir/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Camera.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Camera.cpp > CMakeFiles/RayTracer.dir/Camera.cpp.i

CMakeFiles/RayTracer.dir/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Camera.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Camera.cpp -o CMakeFiles/RayTracer.dir/Camera.cpp.s

CMakeFiles/RayTracer.dir/Camera.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Camera.cpp.o.requires

CMakeFiles/RayTracer.dir/Camera.cpp.o.provides: CMakeFiles/RayTracer.dir/Camera.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Camera.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Camera.cpp.o.provides

CMakeFiles/RayTracer.dir/Camera.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Camera.cpp.o


CMakeFiles/RayTracer.dir/Film.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Film.cpp.o: ../Film.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RayTracer.dir/Film.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Film.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Film.cpp

CMakeFiles/RayTracer.dir/Film.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Film.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Film.cpp > CMakeFiles/RayTracer.dir/Film.cpp.i

CMakeFiles/RayTracer.dir/Film.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Film.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Film.cpp -o CMakeFiles/RayTracer.dir/Film.cpp.s

CMakeFiles/RayTracer.dir/Film.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Film.cpp.o.requires

CMakeFiles/RayTracer.dir/Film.cpp.o.provides: CMakeFiles/RayTracer.dir/Film.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Film.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Film.cpp.o.provides

CMakeFiles/RayTracer.dir/Film.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Film.cpp.o


CMakeFiles/RayTracer.dir/main.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RayTracer.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/main.cpp.o -c /Users/michael/Documents/Projects/RayTracer/main.cpp

CMakeFiles/RayTracer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/main.cpp > CMakeFiles/RayTracer.dir/main.cpp.i

CMakeFiles/RayTracer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/main.cpp -o CMakeFiles/RayTracer.dir/main.cpp.s

CMakeFiles/RayTracer.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/main.cpp.o.requires

CMakeFiles/RayTracer.dir/main.cpp.o.provides: CMakeFiles/RayTracer.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/main.cpp.o.provides

CMakeFiles/RayTracer.dir/main.cpp.o.provides.build: CMakeFiles/RayTracer.dir/main.cpp.o


CMakeFiles/RayTracer.dir/Normal.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Normal.cpp.o: ../Normal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RayTracer.dir/Normal.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Normal.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Normal.cpp

CMakeFiles/RayTracer.dir/Normal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Normal.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Normal.cpp > CMakeFiles/RayTracer.dir/Normal.cpp.i

CMakeFiles/RayTracer.dir/Normal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Normal.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Normal.cpp -o CMakeFiles/RayTracer.dir/Normal.cpp.s

CMakeFiles/RayTracer.dir/Normal.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Normal.cpp.o.requires

CMakeFiles/RayTracer.dir/Normal.cpp.o.provides: CMakeFiles/RayTracer.dir/Normal.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Normal.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Normal.cpp.o.provides

CMakeFiles/RayTracer.dir/Normal.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Normal.cpp.o


CMakeFiles/RayTracer.dir/Point2D.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Point2D.cpp.o: ../Point2D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RayTracer.dir/Point2D.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Point2D.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Point2D.cpp

CMakeFiles/RayTracer.dir/Point2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Point2D.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Point2D.cpp > CMakeFiles/RayTracer.dir/Point2D.cpp.i

CMakeFiles/RayTracer.dir/Point2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Point2D.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Point2D.cpp -o CMakeFiles/RayTracer.dir/Point2D.cpp.s

CMakeFiles/RayTracer.dir/Point2D.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Point2D.cpp.o.requires

CMakeFiles/RayTracer.dir/Point2D.cpp.o.provides: CMakeFiles/RayTracer.dir/Point2D.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Point2D.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Point2D.cpp.o.provides

CMakeFiles/RayTracer.dir/Point2D.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Point2D.cpp.o


CMakeFiles/RayTracer.dir/Point3D.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Point3D.cpp.o: ../Point3D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RayTracer.dir/Point3D.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Point3D.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Point3D.cpp

CMakeFiles/RayTracer.dir/Point3D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Point3D.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Point3D.cpp > CMakeFiles/RayTracer.dir/Point3D.cpp.i

CMakeFiles/RayTracer.dir/Point3D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Point3D.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Point3D.cpp -o CMakeFiles/RayTracer.dir/Point3D.cpp.s

CMakeFiles/RayTracer.dir/Point3D.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Point3D.cpp.o.requires

CMakeFiles/RayTracer.dir/Point3D.cpp.o.provides: CMakeFiles/RayTracer.dir/Point3D.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Point3D.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Point3D.cpp.o.provides

CMakeFiles/RayTracer.dir/Point3D.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Point3D.cpp.o


CMakeFiles/RayTracer.dir/PPMImage.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/PPMImage.cpp.o: ../PPMImage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/RayTracer.dir/PPMImage.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/PPMImage.cpp.o -c /Users/michael/Documents/Projects/RayTracer/PPMImage.cpp

CMakeFiles/RayTracer.dir/PPMImage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/PPMImage.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/PPMImage.cpp > CMakeFiles/RayTracer.dir/PPMImage.cpp.i

CMakeFiles/RayTracer.dir/PPMImage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/PPMImage.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/PPMImage.cpp -o CMakeFiles/RayTracer.dir/PPMImage.cpp.s

CMakeFiles/RayTracer.dir/PPMImage.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/PPMImage.cpp.o.requires

CMakeFiles/RayTracer.dir/PPMImage.cpp.o.provides: CMakeFiles/RayTracer.dir/PPMImage.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/PPMImage.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/PPMImage.cpp.o.provides

CMakeFiles/RayTracer.dir/PPMImage.cpp.o.provides.build: CMakeFiles/RayTracer.dir/PPMImage.cpp.o


CMakeFiles/RayTracer.dir/Ray.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Ray.cpp.o: ../Ray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/RayTracer.dir/Ray.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Ray.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Ray.cpp

CMakeFiles/RayTracer.dir/Ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Ray.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Ray.cpp > CMakeFiles/RayTracer.dir/Ray.cpp.i

CMakeFiles/RayTracer.dir/Ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Ray.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Ray.cpp -o CMakeFiles/RayTracer.dir/Ray.cpp.s

CMakeFiles/RayTracer.dir/Ray.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Ray.cpp.o.requires

CMakeFiles/RayTracer.dir/Ray.cpp.o.provides: CMakeFiles/RayTracer.dir/Ray.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Ray.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Ray.cpp.o.provides

CMakeFiles/RayTracer.dir/Ray.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Ray.cpp.o


CMakeFiles/RayTracer.dir/RayTracer.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/RayTracer.cpp.o: ../RayTracer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/RayTracer.dir/RayTracer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/RayTracer.cpp.o -c /Users/michael/Documents/Projects/RayTracer/RayTracer.cpp

CMakeFiles/RayTracer.dir/RayTracer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/RayTracer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/RayTracer.cpp > CMakeFiles/RayTracer.dir/RayTracer.cpp.i

CMakeFiles/RayTracer.dir/RayTracer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/RayTracer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/RayTracer.cpp -o CMakeFiles/RayTracer.dir/RayTracer.cpp.s

CMakeFiles/RayTracer.dir/RayTracer.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/RayTracer.cpp.o.requires

CMakeFiles/RayTracer.dir/RayTracer.cpp.o.provides: CMakeFiles/RayTracer.dir/RayTracer.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/RayTracer.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/RayTracer.cpp.o.provides

CMakeFiles/RayTracer.dir/RayTracer.cpp.o.provides.build: CMakeFiles/RayTracer.dir/RayTracer.cpp.o


CMakeFiles/RayTracer.dir/Scene.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Scene.cpp.o: ../Scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/RayTracer.dir/Scene.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Scene.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Scene.cpp

CMakeFiles/RayTracer.dir/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Scene.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Scene.cpp > CMakeFiles/RayTracer.dir/Scene.cpp.i

CMakeFiles/RayTracer.dir/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Scene.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Scene.cpp -o CMakeFiles/RayTracer.dir/Scene.cpp.s

CMakeFiles/RayTracer.dir/Scene.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Scene.cpp.o.requires

CMakeFiles/RayTracer.dir/Scene.cpp.o.provides: CMakeFiles/RayTracer.dir/Scene.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Scene.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Scene.cpp.o.provides

CMakeFiles/RayTracer.dir/Scene.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Scene.cpp.o


CMakeFiles/RayTracer.dir/Sphere.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Sphere.cpp.o: ../Sphere.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/RayTracer.dir/Sphere.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Sphere.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Sphere.cpp

CMakeFiles/RayTracer.dir/Sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Sphere.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Sphere.cpp > CMakeFiles/RayTracer.dir/Sphere.cpp.i

CMakeFiles/RayTracer.dir/Sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Sphere.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Sphere.cpp -o CMakeFiles/RayTracer.dir/Sphere.cpp.s

CMakeFiles/RayTracer.dir/Sphere.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Sphere.cpp.o.requires

CMakeFiles/RayTracer.dir/Sphere.cpp.o.provides: CMakeFiles/RayTracer.dir/Sphere.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Sphere.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Sphere.cpp.o.provides

CMakeFiles/RayTracer.dir/Sphere.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Sphere.cpp.o


CMakeFiles/RayTracer.dir/Vector.cpp.o: CMakeFiles/RayTracer.dir/flags.make
CMakeFiles/RayTracer.dir/Vector.cpp.o: ../Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/RayTracer.dir/Vector.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracer.dir/Vector.cpp.o -c /Users/michael/Documents/Projects/RayTracer/Vector.cpp

CMakeFiles/RayTracer.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/Vector.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michael/Documents/Projects/RayTracer/Vector.cpp > CMakeFiles/RayTracer.dir/Vector.cpp.i

CMakeFiles/RayTracer.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/Vector.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michael/Documents/Projects/RayTracer/Vector.cpp -o CMakeFiles/RayTracer.dir/Vector.cpp.s

CMakeFiles/RayTracer.dir/Vector.cpp.o.requires:

.PHONY : CMakeFiles/RayTracer.dir/Vector.cpp.o.requires

CMakeFiles/RayTracer.dir/Vector.cpp.o.provides: CMakeFiles/RayTracer.dir/Vector.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracer.dir/build.make CMakeFiles/RayTracer.dir/Vector.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracer.dir/Vector.cpp.o.provides

CMakeFiles/RayTracer.dir/Vector.cpp.o.provides.build: CMakeFiles/RayTracer.dir/Vector.cpp.o


# Object files for target RayTracer
RayTracer_OBJECTS = \
"CMakeFiles/RayTracer.dir/Camera.cpp.o" \
"CMakeFiles/RayTracer.dir/Film.cpp.o" \
"CMakeFiles/RayTracer.dir/main.cpp.o" \
"CMakeFiles/RayTracer.dir/Normal.cpp.o" \
"CMakeFiles/RayTracer.dir/Point2D.cpp.o" \
"CMakeFiles/RayTracer.dir/Point3D.cpp.o" \
"CMakeFiles/RayTracer.dir/PPMImage.cpp.o" \
"CMakeFiles/RayTracer.dir/Ray.cpp.o" \
"CMakeFiles/RayTracer.dir/RayTracer.cpp.o" \
"CMakeFiles/RayTracer.dir/Scene.cpp.o" \
"CMakeFiles/RayTracer.dir/Sphere.cpp.o" \
"CMakeFiles/RayTracer.dir/Vector.cpp.o"

# External object files for target RayTracer
RayTracer_EXTERNAL_OBJECTS =

RayTracer: CMakeFiles/RayTracer.dir/Camera.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/Film.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/main.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/Normal.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/Point2D.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/Point3D.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/PPMImage.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/Ray.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/RayTracer.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/Scene.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/Sphere.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/Vector.cpp.o
RayTracer: CMakeFiles/RayTracer.dir/build.make
RayTracer: CMakeFiles/RayTracer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable RayTracer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RayTracer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RayTracer.dir/build: RayTracer

.PHONY : CMakeFiles/RayTracer.dir/build

CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Camera.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Film.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/main.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Normal.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Point2D.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Point3D.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/PPMImage.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Ray.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/RayTracer.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Scene.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Sphere.cpp.o.requires
CMakeFiles/RayTracer.dir/requires: CMakeFiles/RayTracer.dir/Vector.cpp.o.requires

.PHONY : CMakeFiles/RayTracer.dir/requires

CMakeFiles/RayTracer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RayTracer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RayTracer.dir/clean

CMakeFiles/RayTracer.dir/depend:
	cd /Users/michael/Documents/Projects/RayTracer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/michael/Documents/Projects/RayTracer /Users/michael/Documents/Projects/RayTracer /Users/michael/Documents/Projects/RayTracer/cmake-build-debug /Users/michael/Documents/Projects/RayTracer/cmake-build-debug /Users/michael/Documents/Projects/RayTracer/cmake-build-debug/CMakeFiles/RayTracer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RayTracer.dir/depend
