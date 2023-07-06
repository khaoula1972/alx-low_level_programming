#include "main.h"
#include "len.c"
#include "pow.c"
/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: a pointer to the string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	const char *ptr = b;
	int len = _len(b);

	if (ptr == NULL)
		return (0);

	while (*ptr != '\0')
	{
		if (*ptr != '0' && *ptr != '1')
			return (0);

		if (*ptr == '1')
			num += _pow(2, len - 1);
		ptr++;
		len--;
	}
	return (num);
}
