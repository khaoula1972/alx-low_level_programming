#!/bin/bash
# Compile all .c files in the current directory into object files
gcc -c -Wall -Werror -fpic *.c
# Create the dynamic library liball.so from the compiled object files
gcc -shared -o liball.so *.o

# Clean up: remove the compiled object files
rm -f *.o
