#include "main.h"
/**
 * print_alphabet - Entry point
 * Description : 'A program tobprint the alphabet'
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
