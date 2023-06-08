#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a pointer
 * Return: the lenght of s
 */
int _strlen_recursion(char *s)
{
	int i = 0;/*the length of the string*/

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
