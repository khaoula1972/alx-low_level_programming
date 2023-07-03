# 0x09-static_libraries Directory

Welcome to the `0x09-static_libraries` directory! This directory focuses on static libraries in the C programming language.

## Table of Contents

- [Introduction to Static Libraries](#introduction-to-static-libraries)
- [Repository Overview](#repository-overview)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Use](#use)

## Introduction to Static Libraries

A static library, also known as an archive, is a collection of precompiled object files that can be linked with other programs at compile-time. Static libraries are commonly used to package reusable code, allowing developers to share and distribute libraries without sharing the source code.

## Repository Overview

The `0x09-static_libraries` repository contains the following files:

1. `create_static_lib.sh`: This shell script creates a static library `libmy.a` by compiling and archiving the provided source files.

2. `libmy.a`: This is the static library file that is created by running the `create_static_lib.sh` script. It contains the compiled object files.

3. `main.h`: This header file contains the function prototypes and declarations used in the provided source files.

## Getting Started

To get started with this repository, follow these steps:

1. Clone the repository by running the following command in your terminal:
```   
git clone https://github.com/khaoula1972/alx-low_level_programming.git
``` 
2. Navigate to the repository directory:
```
cd alx-low_level_programming\0x09-static_libraries
```
3. Compile the codes:
``` 
gcc -Wall -Werror -Wextra -pedantic *.c -o static_libraries
``` 
Replace `*.c` with the specific files you want to compile.

3. Run the compiled program:
``` 
./static_libraries
``` 
Adjust the command based on the specific executable file you have generated.

Please note that you may need to have a C compiler, such as GCC, installed on your system to compile the code successfully.

## Contributing

Contributions to this directory are always welcome. If you find any bugs or want to add new features, please follow the guidelines mentioned in the repository to submit your contributions.

## Use

You are free to use, modify, and distribute the code.
