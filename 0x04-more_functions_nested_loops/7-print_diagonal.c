#include "main.h"
/**
 * print_diagonal - A function
 * Description: 'a diagonal line on the terminal'
 * @n: an integer
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (j == i)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
	}
}
