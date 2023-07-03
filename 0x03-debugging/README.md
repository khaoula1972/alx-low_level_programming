# 0x03-debugging Directory

Welcome to the `0x03-debugging` directory! This directory contains programs written in the C programming language that focus on the concept of debugging.

<p align="center">
  <img src="https://i.pinimg.com/originals/7d/8d/e2/7d8de211d8b6648bdc88ec5cd7f901f2.jpg" alt="Debugging Image" width="400px">
</p>

## Table of Contents

- [Introduction](#introduction)
- [Repository Overview](#repository-overview)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Use](#use)

## Introduction

The `0x03-debugging` directory contains several C programs that showcase the process of debugging. These programs may contain intentional bugs that need to be identified and fixed.

## Repository Overview

The `0x03-debugging` repository consists of the following files:

1. `0-main.c`: This file contains a program that is intentionally causing an infinite loop. It serves as an example for debugging.

2. `1-main.c`: This file contains a program that has a bug causing incorrect output. It serves as an example for debugging and fixing logical errors.

3. `2-largest_number.c`: This file contains a function that is expected to find and return the largest number among three given integers. It may contain a bug that needs to be fixed.

4. `main.h`: This header file contains function prototypes used in the various programs.

## Getting Started

To get started with this repository, follow these steps:

1. Clone the repository by running the following command in your terminal:
```   
git clone https://github.com/khaoula1972/alx-low_level_programming.git
``` 
2. Navigate to the repository directory:
```
cd alx-low_level_programming\0x03-debugging
```
3. Compile the codes:
``` 
gcc -Wall -Werror -Wextra -pedantic *.c -o debugging
``` 
Replace `*.c` with the specific files you want to compile.

3. Run the compiled program:
``` 
./debugging
``` 
Adjust the command based on the specific executable file you have generated.

Please note that you may need to have a C compiler, such as GCC, installed on your system to compile the code successfully.

## Contributing

Contributions to this directory are always welcome. If you find any bugs or want to add new features, please follow the guidelines mentioned in the repository to submit your contributions.

## Use

You are free to use, modify, and distribute the code.
