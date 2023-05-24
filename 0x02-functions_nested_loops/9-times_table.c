#include "main.h"
/**
 * times_table - Learn your times table
 * Description : 'A function that prints the 9 times table'
 */
void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (m / 10 >= 1)
			{
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
			else
				_putchar('0' + m);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
