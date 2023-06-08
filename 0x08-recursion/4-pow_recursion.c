#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x to power y
 * @x: an integer the base
 * @y: an integer the power
 * Return: the power of x by y, -1 if error occures
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
