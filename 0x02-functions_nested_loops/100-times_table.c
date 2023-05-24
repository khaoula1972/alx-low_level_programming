#include "main.h"
#include "11-print_to_98.c"
/**
 * print_times_table - Learn your times table
 * @n : an integer
 * Description : 'A function that prints the 9 times table'
 */
void print_times_table(int n)
{
	int i;
	int j;
	int m;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (j != 0)
					_putchar(' ');
				if (m > 9 && m < 100)
				{
					_putchar(' ');
					print_large_number(m);
				}
				else if (m > 99)
				{
					print_large_number(m);
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					print_large_number(m);
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
