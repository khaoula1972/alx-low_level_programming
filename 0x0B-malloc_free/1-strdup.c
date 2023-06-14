#include "main.h"
#include <string.h>
/**
 * _strdup - Duplicates a string.
 * @str: the string we want to duplicate
 * Return: Null if fails, a pointer to the duplicated string if not
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t length;
	size_t i;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
