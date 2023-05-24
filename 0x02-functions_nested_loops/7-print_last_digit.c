#include "main.h"
/**
 * print_last_digit - Entry point
 * @n : an integer
 * Description : 'Printing the last digit'
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d = -d;
	_putchar('0' + d);
	return (d);
}
