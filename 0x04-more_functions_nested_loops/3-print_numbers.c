#include "main.h"
/**
 * print_numbers - printing from 0 to 9
 * Description: a function to print numbers
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
