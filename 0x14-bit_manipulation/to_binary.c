#include "main.h"
int _putchar(char c);
/**
 * to_binary - a function that prints the binary
 * representation of a number.
 * @n: a number to be printed in binary
 * Return: the string of converted number in binary
 */
char *to_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printStarted = 0;
	static char binary[sizeof(unsigned long int) * 8 + 1];
	int i = 0;

	if (n == 0)
		return ("0\0");

	while (mask > 0)
	{
		if ((n & mask) != 0 || printStarted)
		{
			binary[i++] = ((n & mask) != 0) ? '1' : '0';
			printStarted = 1; /* Set the flag once printing starts */
		}
		mask >>= 1;

	}

	binary[i] = '\0';
	return (binary);
}
