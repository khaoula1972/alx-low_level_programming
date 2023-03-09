#include "main.h"
/**
 * better_sqrt_function - it's better than yours :)
 * @n: a number
 * @i: whatever is this
 * Return: always 0
 */
int better_sqrt_function(int n, int i)
{
        if (i * i > n)
                return (-1);
        if (i * i == n)
                return (i);
        return (better_sqrt_function(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square
 * @n: a number
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (better_sqrt_function(n, 0));
}
