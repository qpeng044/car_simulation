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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build

# Include any dependencies generated for this target.
include src/transport/CMakeFiles/GazeboCoSimTransport.dir/depend.make

# Include the progress variables for this target.
include src/transport/CMakeFiles/GazeboCoSimTransport.dir/progress.make

# Include the compile flags for this target's objects.
include src/transport/CMakeFiles/GazeboCoSimTransport.dir/flags.make

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.o: src/transport/CMakeFiles/GazeboCoSimTransport.dir/flags.make
src/transport/CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.o: ../src/transport/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/transport/CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.o"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.o -c /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Client.cpp

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.i"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Client.cpp > CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.i

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.s"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Client.cpp -o CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.s

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.o: src/transport/CMakeFiles/GazeboCoSimTransport.dir/flags.make
src/transport/CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.o: ../src/transport/Connection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/transport/CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.o"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.o -c /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Connection.cpp

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.i"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Connection.cpp > CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.i

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.s"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Connection.cpp -o CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.s

src/transport/CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.o: src/transport/CMakeFiles/GazeboCoSimTransport.dir/flags.make
src/transport/CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.o: ../src/transport/ConnectionManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/transport/CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.o"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.o -c /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/ConnectionManager.cpp

src/transport/CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.i"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/ConnectionManager.cpp > CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.i

src/transport/CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.s"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/ConnectionManager.cpp -o CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.s

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.o: src/transport/CMakeFiles/GazeboCoSimTransport.dir/flags.make
src/transport/CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.o: ../src/transport/Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/transport/CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.o"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.o -c /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Server.cpp

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.i"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Server.cpp > CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.i

src/transport/CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.s"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/Server.cpp -o CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.s

src/transport/CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.o: src/transport/CMakeFiles/GazeboCoSimTransport.dir/flags.make
src/transport/CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.o: ../src/transport/readWithTimeout.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/transport/CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.o"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.o -c /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/readWithTimeout.cpp

src/transport/CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.i"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/readWithTimeout.cpp > CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.i

src/transport/CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.s"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport/readWithTimeout.cpp -o CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.s

# Object files for target GazeboCoSimTransport
GazeboCoSimTransport_OBJECTS = \
"CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.o" \
"CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.o" \
"CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.o" \
"CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.o" \
"CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.o"

# External object files for target GazeboCoSimTransport
GazeboCoSimTransport_EXTERNAL_OBJECTS =

../export/lib/libGazeboCoSimTransport.so: src/transport/CMakeFiles/GazeboCoSimTransport.dir/Client.cpp.o
../export/lib/libGazeboCoSimTransport.so: src/transport/CMakeFiles/GazeboCoSimTransport.dir/Connection.cpp.o
../export/lib/libGazeboCoSimTransport.so: src/transport/CMakeFiles/GazeboCoSimTransport.dir/ConnectionManager.cpp.o
../export/lib/libGazeboCoSimTransport.so: src/transport/CMakeFiles/GazeboCoSimTransport.dir/Server.cpp.o
../export/lib/libGazeboCoSimTransport.so: src/transport/CMakeFiles/GazeboCoSimTransport.dir/readWithTimeout.cpp.o
../export/lib/libGazeboCoSimTransport.so: src/transport/CMakeFiles/GazeboCoSimTransport.dir/build.make
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libSimTKsimbody.so.3.6
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libgazebo_ccd.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libsdformat.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libOgreMain.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libignition-transport4.so.4.0.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libignition-msgs1.so.1.0.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: ../export/lib/libmsgproto.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libSimTKmath.so.3.6
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libSimTKcommon.so.3.6
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libblas.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/liblapack.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libblas.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/liblapack.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.71.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libignition-math4.so.4.0.0
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libuuid.so
../export/lib/libGazeboCoSimTransport.so: /usr/lib/x86_64-linux-gnu/libuuid.so
../export/lib/libGazeboCoSimTransport.so: src/transport/CMakeFiles/GazeboCoSimTransport.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../../../export/lib/libGazeboCoSimTransport.so"
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GazeboCoSimTransport.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/transport/CMakeFiles/GazeboCoSimTransport.dir/build: ../export/lib/libGazeboCoSimTransport.so

.PHONY : src/transport/CMakeFiles/GazeboCoSimTransport.dir/build

src/transport/CMakeFiles/GazeboCoSimTransport.dir/clean:
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport && $(CMAKE_COMMAND) -P CMakeFiles/GazeboCoSimTransport.dir/cmake_clean.cmake
.PHONY : src/transport/CMakeFiles/GazeboCoSimTransport.dir/clean

src/transport/CMakeFiles/GazeboCoSimTransport.dir/depend:
	cd /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/src/transport /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport /home/tfpeng/work/other/TFwork/code/mat/GazeboPlugin/build/src/transport/CMakeFiles/GazeboCoSimTransport.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/transport/CMakeFiles/GazeboCoSimTransport.dir/depend

