#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: a pointer to the name
 * @f: a pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
