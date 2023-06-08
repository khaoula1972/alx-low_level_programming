#include "main.h"
#include "2-strlen_recursion.c"

/**
 * check_pal - checks the characters recursively for palindrome.
 * @s: pointer to the character to check
 * @i: iterator
 * @len: length of the string
 * Return: 1
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - a function that checks if a string is a palindrome or not.
 * @s: a pointer to the character to test
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
