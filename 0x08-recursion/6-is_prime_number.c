#include "main.h"
/**
 * is_divisible - a function that checks if n is divisible
 * @n: an integer
 * @i: an integer
 * Return: 0 or 1
 */
int is_divisible(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_divisible(n, i - 1));
}
/**
 * is_prime_number - a function that checks if an integer is prime number
 * @n: an integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == -1)
		return (0);
	else if (n < 0)
	{
		return (is_divisible(-n, 1 - n));
	}
	else
		return (is_divisible(n, n - 1));
}
