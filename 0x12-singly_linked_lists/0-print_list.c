#include "main.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a pointer to the header of the linked list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t length;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%lu] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		length++;
		h = h->next;
	}
	return (length);
}
