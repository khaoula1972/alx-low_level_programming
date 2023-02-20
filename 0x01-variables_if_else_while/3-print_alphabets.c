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
	char ch = 'a';

	while (ch <= 'z')
		putchar(ch);
		ch++;
	ch = 'A';
	while (ch <= 'Z')
		putchar(ch);
		ch++;
	putchar('\n');
	return (0);
}
