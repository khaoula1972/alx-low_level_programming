#include "main.h"
/**
 * *string_nconcat - concat two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to concatenate
 * Return: Pointer to the concatenated string, or NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated == NULL)
		return (NULL);
	strcpy(concatenated, s1);
	strncat(concatenated, s2, n);
	concatenated[len1 + n] = '\0';
	return (concatenated);
}
