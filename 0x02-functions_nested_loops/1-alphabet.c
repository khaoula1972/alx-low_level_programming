#include "_putchar.c"
/**
 * print_alphabet - Entry point
 * Description : 'A program tobprint the alphabet'
 * Return : Always 0
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
	return;
}
