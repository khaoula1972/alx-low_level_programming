#include "main.h"
/**
 * _isupper - a function
 * @c: an integer
 * Description: 'a function that checks for uppercase character'
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
