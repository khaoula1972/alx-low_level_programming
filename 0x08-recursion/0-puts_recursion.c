#include "main.h"
/**
 * _puts_recursion - writes recursive
 * @s: pointer to The character to print
 *
 * Return: On success 0.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
