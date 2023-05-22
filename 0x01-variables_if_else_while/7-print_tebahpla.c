#include <stdio.h>
/**
 * main - Entry point
 * Description : 'Calling the alphabet game'
 * Return: Always 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
