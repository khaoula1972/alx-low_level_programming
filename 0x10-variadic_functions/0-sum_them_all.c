#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of parameters
 * Return: the sum of all parameters, 0 if no parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int num;
	unsigned int s = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		s += num;
	}

	va_end(args);
	return (s);
}
