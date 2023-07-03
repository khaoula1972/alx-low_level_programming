# 0x0A-argc_argv Directory

Welcome to the `0x0A-argc_argv` directory! This directory focuses on command-line arguments and the `argc` and `argv` parameters in the C programming language.

## Table of Contents

- [Introduction to Command-Line Arguments](#introduction-to-command-line-arguments)
- [Repository Overview](#repository-overview)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Use](#use)

## Introduction to Command-Line Arguments

Command-line arguments allow users to pass input values or parameters to a program when it is executed from the command line. The `argc` parameter represents the number of arguments passed to the program, and the `argv` parameter is an array of strings that contain the actual arguments.

## Repository Overview

The `0x0A-argc_argv` repository contains the following files:

1. `0-whatsmyname.c`: This file contains a program that prints the name of the program itself.

2. `1-args.c`: This file contains a program that prints all the arguments passed to it.

3. `100-change.c`: This file contains a program that determines the minimum number of coins needed to make change for a given amount of money.

4. `2-args.c`: This file contains a program that prints all the arguments passed to it, except for the first one.

5. `3-mul.c`: This file contains a program that multiplies two numbers passed as command-line arguments and prints the result.

6. `4-add.c`: This file contains a program that adds positive numbers passed as command-line arguments and prints the sum.

## Getting Started

To get started with this repository, follow these steps:

1. Clone the repository by running the following command in your terminal:
```   
git clone https://github.com/khaoula1972/alx-low_level_programming.git
``` 
2. Navigate to the repository directory:
```
cd alx-low_level_programming\0x0A-argc_argv
```
3. Compile the codes:
``` 
gcc -Wall -Werror -Wextra -pedantic *.c -o argc_argv
``` 
Replace `*.c` with the specific files you want to compile.

3. Run the compiled program:
``` 
./argc_argv
``` 
Adjust the command based on the specific executable file you have generated.

Please note that you may need to have a C compiler, such as GCC, installed on your system to compile the code successfully.

## Contributing

Contributions to this directory are always welcome. If you find any bugs or want to add new features, please follow the guidelines mentioned in the repository to submit your contributions.

## Use

You are free to use, modify, and distribute the code.
