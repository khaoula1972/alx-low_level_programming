#include "main.h"
/**
 * factorial - recursive function to calculate factorials
 * @n: the given number
 * Return: 0
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
