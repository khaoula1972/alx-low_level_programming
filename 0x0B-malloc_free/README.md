# 0x0B-malloc_free Directory

Welcome to the `0x0B-malloc_free` directory! This directory focuses on dynamic memory allocation and deallocation using `malloc` and `free` in the C programming language.

## Table of Contents

- [Introduction to Dynamic Memory Allocation](#introduction-to-dynamic-memory-allocation)
- [Repository Overview](#repository-overview)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Use](#use)

## Introduction to Dynamic Memory Allocation

Dynamic memory allocation allows programs to request memory from the operating system at runtime. This is useful when the required memory size is not known beforehand or when memory needs to be allocated and deallocated dynamically during program execution. In C, dynamic memory allocation is typically done using functions like `malloc` and `free`.

## Repository Overview

The `0x0B-malloc_free` repository contains the following files:

1. `0-create_array.c`: This file contains a function that creates an array of characters and initializes it with a specific character.

2. `1-strdup.c`: This file contains a function that duplicates a string using dynamic memory allocation.

3. `2-str_concat.c`: This file contains a function that concatenates two strings into a newly allocated space in memory.

4. `3-alloc_grid.c`: This file contains a function that creates a 2-dimensional array (grid) of integers using dynamic memory allocation.

5. `4-free_grid.c`: This file contains a function that frees the memory allocated for a 2-dimensional array (grid).

6. `main.h`: This header file contains the function prototypes used in the above files.

## Getting Started

To get started with this repository, follow these steps:

1. Clone the repository by running the following command in your terminal:
```   
git clone https://github.com/khaoula1972/alx-low_level_programming.git
``` 
2. Navigate to the repository directory:
```
cd alx-low_level_programming\0x0B-malloc_free
```
3. Compile the codes:
``` 
gcc -Wall -Werror -Wextra -pedantic *.c -o malloc_free
``` 
Replace `*.c` with the specific files you want to compile, or use `*.asm` for assembly files.

3. Run the compiled program:
``` 
./malloc_free
``` 
Adjust the command based on the specific executable file you have generated.

Please note that you may need to have a C compiler, such as GCC, installed on your system to compile the code successfully.

## Contributing

Contributions to this directory are always welcome. If you find any bugs or want to add new features, please follow the guidelines mentioned in the repository to submit your contributions.

## Use

You are free to use, modify, and distribute the code.
