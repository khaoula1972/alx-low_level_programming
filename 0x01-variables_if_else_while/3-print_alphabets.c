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
	char ch;

	for ( ch = "a"; (ch = "z"); ch++ )
		putchar(ch);
	for ( ch = "A"; (ch = "B"); ch++ )
		putchar(ch);
	putchar('\n');
	return (0);
}
