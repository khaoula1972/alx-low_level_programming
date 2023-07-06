#include "main.h"
int _putchar(char c);
/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: a number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int numBits = sizeof(unsigned int) * 8;
	unsigned int mask;
	int printStarted = 0;

	if (n == 0)
		_putchar('0');

	for (i = numBits - 1; i >= 0; i--)
	{
		mask = 1UL << i;

		if ((n & mask) != 0 || printStarted)
		{
			_putchar(((n & mask) != 0) ? '1' : '0');
			printStarted = 1; /* Set the flag once printing starts */
		}
	}
}
