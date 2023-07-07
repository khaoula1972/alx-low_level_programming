#include "main.h"
/**
 * flip_bits - function that returns the nbr of bits you would need to flip
 * @n: The first num
 * @m: The second num
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		if ((xor & 1) == 1)
			count++;
		xor >>= 1;
	}
	return (count);
}
