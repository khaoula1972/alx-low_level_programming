#include "main.h"
/**
 * _isalpha - Entry point
 * @c: a character
 * Description : 'A program that checks for alphabet'
 * Return: it's either 1 or 0
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
