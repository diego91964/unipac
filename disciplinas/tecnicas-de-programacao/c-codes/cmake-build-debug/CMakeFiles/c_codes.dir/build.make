# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/diego/dev/ide/clion-2016.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/diego/dev/ide/clion-2016.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_codes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_codes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_codes.dir/flags.make

CMakeFiles/c_codes.dir/funcoes/calculadora.c.o: CMakeFiles/c_codes.dir/flags.make
CMakeFiles/c_codes.dir/funcoes/calculadora.c.o: ../funcoes/calculadora.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_codes.dir/funcoes/calculadora.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c_codes.dir/funcoes/calculadora.c.o   -c /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/funcoes/calculadora.c

CMakeFiles/c_codes.dir/funcoes/calculadora.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_codes.dir/funcoes/calculadora.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/funcoes/calculadora.c > CMakeFiles/c_codes.dir/funcoes/calculadora.c.i

CMakeFiles/c_codes.dir/funcoes/calculadora.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_codes.dir/funcoes/calculadora.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/funcoes/calculadora.c -o CMakeFiles/c_codes.dir/funcoes/calculadora.c.s

CMakeFiles/c_codes.dir/funcoes/calculadora.c.o.requires:

.PHONY : CMakeFiles/c_codes.dir/funcoes/calculadora.c.o.requires

CMakeFiles/c_codes.dir/funcoes/calculadora.c.o.provides: CMakeFiles/c_codes.dir/funcoes/calculadora.c.o.requires
	$(MAKE) -f CMakeFiles/c_codes.dir/build.make CMakeFiles/c_codes.dir/funcoes/calculadora.c.o.provides.build
.PHONY : CMakeFiles/c_codes.dir/funcoes/calculadora.c.o.provides

CMakeFiles/c_codes.dir/funcoes/calculadora.c.o.provides.build: CMakeFiles/c_codes.dir/funcoes/calculadora.c.o


# Object files for target c_codes
c_codes_OBJECTS = \
"CMakeFiles/c_codes.dir/funcoes/calculadora.c.o"

# External object files for target c_codes
c_codes_EXTERNAL_OBJECTS =

c_codes: CMakeFiles/c_codes.dir/funcoes/calculadora.c.o
c_codes: CMakeFiles/c_codes.dir/build.make
c_codes: CMakeFiles/c_codes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_codes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_codes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_codes.dir/build: c_codes

.PHONY : CMakeFiles/c_codes.dir/build

CMakeFiles/c_codes.dir/requires: CMakeFiles/c_codes.dir/funcoes/calculadora.c.o.requires

.PHONY : CMakeFiles/c_codes.dir/requires

CMakeFiles/c_codes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c_codes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c_codes.dir/clean

CMakeFiles/c_codes.dir/depend:
	cd /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/cmake-build-debug /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/cmake-build-debug /home/diego/dev/repo/unipac/disciplinas/tecnicas-de-programacao/c-codes/cmake-build-debug/CMakeFiles/c_codes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_codes.dir/depend

