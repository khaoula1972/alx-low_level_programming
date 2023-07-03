# 0x00-hello_world Directory

Welcome to the `0x00-hello_world` directory! This directory contains introductory programs written in the C programming language.

## Table of Contents

- [Introduction](#introduction)
- [Repository Overview](#repository-overview)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Use](#use)

## Introduction

The `0x00-hello_world` directory contains several files that cover different aspects of the C programming language, including preprocessing, compilation, assembly, and basic input/output operations.

## Repository Overview

The `0x00-hello_world` repository consists of the following files:

1. `0-preprocessor`: This file contains the command to run the C preprocessor, which processes the source code before compilation.

2. `1-compiler`: This file contains the command to compile a C source code file using the default compiler.

3. `100-intel`: This file contains the command to compile a C source code file into assembly code using the Intel syntax.

4. `101-quote.c`: This file contains a C program that prints a specific message to the standard error stream.

5. `2-assembler`: This file contains the command to assemble a C source code file into an object file.

6. `3-name`: This file contains a script that compiles a C source code file and creates an executable named `cisfun`.

7. `4-puts.c`: This file contains a C program that uses the `puts` function to print a string to the standard output.

8. `5-printf.c`: This file contains a C program that uses the `printf` function to print a formatted string to the standard output.

9. `6-size.c`: This file contains a C program that prints the size of various data types on the computer.

## Getting Started

To get started with this repository, follow these steps:

1. Clone the repository by running the following command in your terminal:
```   
git clone https://github.com/khaoula1972/alx-low_level_programming.git
``` 
2. Navigate to the repository directory:
```
cd alx-low_level_programming\0x00-hello_world
```
3. Compile the codes:
``` 
gcc -Wall -Werror -Wextra -pedantic *.c -o hello_world
``` 
Replace `*.c` with the specific files you want to compile, or use `*.asm` for assembly files.

3. Run the compiled program:
``` 
./hello_world
``` 
Adjust the command based on the specific executable file you have generated.

Please note that you may need to have a C compiler, such as GCC, installed on your system to compile the code successfully.

## Contributing

Contributions to this directory are always welcome. If you find any bugs or want to add new features, please follow the guidelines mentioned in the repository to submit your contributions.

## Use

You are free to use, modify, and distribute the code.
