#include "main.h"
/**
 * _strncat - Concatenation the strng to be @src
 * null byte, pointed by @dest
 * @dest: pointer to the string to be concatenated upon
 * @src: sourceof the string to be appended to @dest
 * @n: max numebr
 *
 * Return: a pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
