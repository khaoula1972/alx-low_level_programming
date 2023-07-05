# 0x13-more_singly_linked_lists

This directory contains C programs that demonstrate various operations and functionalities related to singly linked lists. Singly linked lists are a fundamental data structure in computer science, consisting of nodes that are connected in a linear manner. Each node contains data and a pointer to the next node in the list.

<p align="center">
  <img src="https://prepinsta.com/wp-content/uploads/2020/07/Linked-Lists-in-java-meme.jpg" alt="Singly Linked List Animation">
</p>

## Table of Contents

- [Introduction](#introduction)
- [Repository Overview](#repository-overview)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Use](#use)

## Introduction
In this directory, you will find a collection of C programs that illustrate different operations on singly linked lists. These programs cover a wide range of functionalities, including printing the elements of a linked list, counting the number of elements, adding and removing nodes, calculating the sum of elements, and more. Each program is self-contained and demonstrates a specific operation or concept.

## Repository Overview

Here are the files present in this directory:

- [0-print_listint.c](./0-print_listint.c): Program to print all the elements of a linked list.
- [1-listint_len.c](./1-listint_len.c): Program to count the number of elements in a linked list.
- [2-add_nodeint.c](./2-add_nodeint.c): Program to add a new node at the beginning of a linked list.
- [3-add_nodeint_end.c](./3-add_nodeint_end.c): Program to add a new node at the end of a linked list.
- [4-free_listint.c](./4-free_listint.c): Program to free the memory allocated for a linked list.
- [5-free_listint2.c](./5-free_listint2.c): Program to free the memory allocated for a linked list, setting the head to NULL.
- [6-pop_listint.c](./6-pop_listint.c): Program to delete the head node of a linked list and return its data.
- [7-get_nodeint.c](./7-get_nodeint.c): Program to retrieve a node at a given index from a linked list.
- [8-sum_listint.c](./8-sum_listint.c): Program to calculate the sum of all the elements in a linked list.
- [9-insert_nodeint.c](./9-insert_nodeint.c): Program to insert a new node at a given position in a linked list.
- [10-delete_nodeint.c](./10-delete_nodeint.c): Program to delete a node at a given position in a linked list.
- [100-reverse_listint.c](./100-reverse_listint.c): Program to reverse a linked list.
- [101-print_listint_safe.c](./101-print_listint_safe.c): Program to print all the elements of a linked list, handling loops.
- [102-free_listint_safe.c](./102-free_listint_safe.c): Program to free the memory allocated for a linked list, handling loops.
- [103-find_loop.c](./103-find_loop.c): Program to find if a linked list contains a loop.
- [lists.h](./lists.h): Header file containing the structure definition for the linked list.

## Getting Started

To get started with this repository, follow these steps:

1. Clone the repository by running the following command in your terminal:
```   
git clone https://github.com/khaoula1972/alx-low_level_programming.git
``` 
2. Navigate to the repository directory:
```
cd alx-low_level_programming\0x13-more_singly_linked_lists
```
3. Compile the codes:
``` 
gcc -Wall -Werror -Wextra -pedantic *.c -o more_singly_linked_lists
``` 
Replace `*.c` with the specific files you want to compile.

3. Run the compiled program:
``` 
./more_singly_linked_lists
``` 
Adjust the command based on the specific executable file you have generated.

Please note that you may need to have a C compiler, such as GCC, installed on your system to compile the code successfully.

## Contributing

Contributions to this directory are always welcome. If you find any bugs or want to add new features, please follow the guidelines mentioned in the repository to submit your contributions.

## Use

You are free to use, modify, and distribute the code.
