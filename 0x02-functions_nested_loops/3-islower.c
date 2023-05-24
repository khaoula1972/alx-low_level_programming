#include "main.h"
/**
 * _islower - Entry
 * @c : an integer
 * Description : 'A program that checks for lowercase character'
 * Return : 1 or 0
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
