#include "main.h"
/**
 * print_sign - Entry point
 * @n : An integer
 * Description : 'Signing a number'
 * Return: it's either 1 , 0, -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('+');
			return (1);
		}
	}
}
