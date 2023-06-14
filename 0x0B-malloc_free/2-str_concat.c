#include "main.h"
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: Null if fails, a pointer to concatenated if not
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int j;
	unsigned int i, num;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	j = strlen(s2);
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);
	for (num = 0; num < i + j; num++)
	{
		if (num < i)
			concat[num] = s1[num];
		else
			concat[num] = s2[num - i];
	}
	concat[num] = '\0';
	return (concat);
}
