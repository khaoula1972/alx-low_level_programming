# 0x0C-more_malloc_free Directory

Welcome to the `0x0C-more_malloc_free` directory! This directory focuses on dynamic memory allocation using `malloc`, `calloc`, and `realloc` in the C programming language.

## Table of Contents

- [Introduction to Dynamic Memory Allocation](#introduction-to-dynamic-memory-allocation)
- [Repository Overview](#repository-overview)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Use](#use)

## Introduction to Dynamic Memory Allocation

Dynamic memory allocation allows programs to request memory from the operating system at runtime. This is useful when the required memory size is not known beforehand or when memory needs to be allocated and deallocated dynamically during program execution. In C, dynamic memory allocation is typically done using functions like `malloc`, `calloc`, and `realloc`.

## Repository Overview

The `0x0C-more_malloc_free` repository contains the following files:

1. `0-malloc_checked.c`: This file contains a function that allocates memory using `malloc` and checks if the allocation was successful.

2. `1-string_nconcat.c`: This file contains a function that concatenates two strings up to a specified number of characters using dynamic memory allocation.

3. `100-realloc.c`: This file contains a function that reallocates memory.

4. `2-calloc.c`: This file contains a function that allocates memory for an array.

5. `3-array_range.c`: This file contains a function that creates an array of integers filled with a range of values.

6. `main.h`: This header file contains the function prototypes used in the above files.

## Getting Started

To get started with this repository, follow these steps:

1. Clone the repository by running the following command in your terminal:
```   
git clone https://github.com/khaoula1972/alx-low_level_programming.git
``` 
2. Navigate to the repository directory:
```
cd alx-low_level_programming\0x0C-more_malloc_free
```
3. Compile the codes:
``` 
gcc -Wall -Werror -Wextra -pedantic *.c -o more_malloc_free
``` 
Replace `*.c` with the specific files you want to compile.

3. Run the compiled program:
``` 
./more_malloc_free
``` 
Adjust the command based on the specific executable file you have generated.

Please note that you may need to have a C compiler, such as GCC, installed on your system to compile the code successfully.

## Contributing

Contributions to this directory are always welcome. If you find any bugs or want to add new features, please follow the guidelines mentioned in the repository to submit your contributions.

## Use

You are free to use, modify, and distribute the code.

