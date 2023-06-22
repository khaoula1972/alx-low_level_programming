#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: a pointer to the array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: no element matches -1, Index of the first matching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
