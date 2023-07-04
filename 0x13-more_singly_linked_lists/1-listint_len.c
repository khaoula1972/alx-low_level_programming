#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in
 * a linked list_t list.
 * @h: a pointer to the header
 * Return: the number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);
	while (h != 0)
	{
		length++;
		h = h->next;
	}
	return (length);
}
