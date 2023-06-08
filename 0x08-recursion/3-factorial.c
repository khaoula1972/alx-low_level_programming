#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: an integer
 * Return: the given number -1 if error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
