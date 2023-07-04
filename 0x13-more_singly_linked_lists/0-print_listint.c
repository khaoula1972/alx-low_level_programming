#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a list_tint list.
 * @h: a pointer to the header of the linked list
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
