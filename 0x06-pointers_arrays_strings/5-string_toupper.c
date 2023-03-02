#include "main.h"
/**
 * string_toupper - Change lowercase
 *
 * @str: string
 *
 * Return: a pointer tochange
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
