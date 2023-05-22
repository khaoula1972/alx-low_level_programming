#include <stdio.h>
/**
 * main - Entry point
 * Description : 'Calling the alphabet game low/up case'
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
