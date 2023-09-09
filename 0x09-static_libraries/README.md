This directory contains a task which help in understaanding how to create a Static library.

The first step is to create the README file
Second step,the main.h file in which all the functions are kept

Create each of the c files containing their individual function.
Convert the c files to object file(or .o file) using the command 'gcc -c *c'
create your library with "ar rcs nameoflibrary.a" 
Copy all .o files into the created library with "ar rcs nameooflibrary.a *.o
Run ar -t nameoflibrary.a to list the files present in the created library
Run this other code 'nm nameoflibrary.a' to also list the file

Task 1(second task)
Create a shell script that creates a static library called liball.a from all the .c files using the following:

