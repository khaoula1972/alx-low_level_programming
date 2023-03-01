#include "main.h"
/**
 * puts2 - should print only one character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (j = 0; j <= t; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
