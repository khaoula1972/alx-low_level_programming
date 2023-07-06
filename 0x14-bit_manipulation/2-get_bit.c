#include "main.h"
#include "len.c"
#include "to_binary.c"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: the given number to search for
 * @index:  the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *bin = to_binary(n);
	unsigned int len = _len(bin);
	int i;

	if (index >= len || index < 0)
		return (-1);

	i = len - 1 - index;
	return (bin[i] - '0');
}
