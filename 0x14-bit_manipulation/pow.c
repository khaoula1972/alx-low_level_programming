#include "main.h"
/**
 * _pow - a function that returns the value of x to power y
 * @x: an integer the base
 * @y: an integer the power
 * Return: the power of x by y, -1 if error occures
 */
unsigned int _pow(int x, int y)
{
	unsigned int pow = 1;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	while (y > 0)
	{
		pow *= x;
		y--;
	}

	return (pow);
}
