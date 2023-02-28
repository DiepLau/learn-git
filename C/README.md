How to use Cmake? A step by step guide :)

#1. Create a folder with the file "CMakeLists.txt" 
	Copy Paste this Code in: 

	"
	# define the minimum cmake version
	cmake_minimum_required(VERSION 3.20)

	# define the project name
	project(homework_1_4_student VERSION 1.0 LANGUAGES C)

	# define the c standard version
	set(CMAKE_C_STANDARD 11)
	set(CMAKE_C_STANDARD_REQUIRED True)

	# add some compile options
	add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

	# add an executabel and assign files to it
	add_executable(student_struct_hw4_exec student.c)
	"

	!! Don't forget to change the binary and the data name in the last line!! 


#2. Create a ssh file "run_cmake.sh" 
	-> Small script for CMake 

	#!/bin/bash

	cmake -G "Unix Makefiles" -S . -B build -D CMAKE_C_COMPILER=clang 

	
	!! You can find more options with "cmake --help" !!


#3. Run the .sh file: 
	Type into your terminal following commands:

	chmod +x run_cmake.sh	// Get Execution rights
	./run_cmake.sh 		// Run the script

	-> Build the folder 
	

#4. Build your project 
	Type into your terminal following commands:
	
	cd build		// Change into build folder
	make			// Build project
	/**BINARY**		// Run your binary


#5. Create file ".gitignore" 
	
	Build/*
	

Now you have ONE binary to execute ONE big programm :) 
	
