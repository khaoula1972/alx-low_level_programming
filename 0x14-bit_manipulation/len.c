#include "main.h"
/**
 * _len - A function that calculates a string's length
 * @string: A string to calculate the length.
 * Return: The length.
 */
int _len(const char *string)
{
	int i = 0; /* a counter */

	if (string == NULL)
		return (0);

	while (string[i] != '\0')
	{
		if (i == INT_MAX) /* to resolve overflow issues */
			return (-1);
		i++;
	}

	return (i);
}
