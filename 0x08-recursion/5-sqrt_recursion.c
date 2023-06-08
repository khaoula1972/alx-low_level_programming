#include "main.h"
/**
 * find_square - a function that look for the square of a number
 * @n: an integer
 * @i: an integer
 * Return: the square
 */
int find_square(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_square(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square
 * @n: an integer
 * Return: the square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_square(n, 0));
}
