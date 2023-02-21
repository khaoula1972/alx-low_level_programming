#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 122;

	while (i <= 122)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
