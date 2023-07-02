#include <stdio.h>
/**
 * main - Entry point
 * Description : 'printing combinations of numbers'
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
