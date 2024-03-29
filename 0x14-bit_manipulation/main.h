#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <limits.h>

/* Functions of the tasks */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

/* Helpful functions */

unsigned int _pow(int x, int y);
int _len(const char *string);

#endif
