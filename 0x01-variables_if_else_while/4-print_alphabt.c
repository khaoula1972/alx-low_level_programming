#include <stdio.h>
/**
 * main - Entry point
 * Description : 'Alphabet soup'
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
