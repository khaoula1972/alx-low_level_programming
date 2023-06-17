#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size in bytes to allocate
 * Return: Pointer to the allocated memory, 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
