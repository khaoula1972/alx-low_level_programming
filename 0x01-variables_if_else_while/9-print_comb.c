#include <stdio.h>
/**
 * main - Entry point
 * Description : 'printing numbers without char variables'
 * Return: Always 0
 */
int main(void)
{
	int n = 48;

	while (n < 57)
	{
		putchar(n);
		putchar(44);
		putchar(32);
		n++;
	}
	putchar(57);
	return (0);
}
