#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * @array: a pointer to our array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
