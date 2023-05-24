#include "main.h"
/**
 * jack_bauer - Entry point
 * Description : 'Printing every minute of the day'
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i / 10 < 1)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			_putchar(':');
			if (j / 10 < 1)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			_putchar('\n');
		}
	}
}
