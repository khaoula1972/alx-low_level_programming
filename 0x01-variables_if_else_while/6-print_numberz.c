#include <stdio.h>
/**
 * main - Entry point
 * Description : 'printing numbers without char variables'
 * Return: Always 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
