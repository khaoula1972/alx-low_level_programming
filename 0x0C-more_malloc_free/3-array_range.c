#include "main.h"
/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value of the array
 * @max: Maximum value of the array
 * Return: Pointer to the newly created array, or NULL on fail
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
