#include "main.h"
/**
 * _strncpy - Copy
 *
 * @dest: pointer to the string to be copy upon
 * @src: sourceof the string to be copy to @dest
 * @n: max numebr
 *
 * Return: a pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
