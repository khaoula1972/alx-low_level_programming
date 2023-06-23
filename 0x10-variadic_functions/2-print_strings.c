#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 * Return: prints
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%d", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
