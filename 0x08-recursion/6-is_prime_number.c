#include "main.h"
/**
 * better_prime_function - a function that's better
 * @n: number
 * @i: number
 * Return: always 0
 */
int better_prime_function(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (better_prime_function(n, i - 1));
}
/**
 * is_prime_number - a function that's better
 * @n: number
 * Return: always 0
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == -1)
		return (0);
	if (n < 0)
	{
		return (better_prime_function(- n, 1- n));
	}
	else
	{
		return (better_prime_function(n, n - 1));
	}
}
