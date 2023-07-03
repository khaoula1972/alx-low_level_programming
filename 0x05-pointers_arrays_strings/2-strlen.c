#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
