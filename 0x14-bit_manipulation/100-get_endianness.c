#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr = (char *)&n; /* assign it the address of 'n' */

	return ((int)*ptr); /* value of the first byte pointed to */
}
