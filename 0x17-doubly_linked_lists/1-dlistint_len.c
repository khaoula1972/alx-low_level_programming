#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements
 * in a double linked list
 * @h: the head
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i = 0;

	if (h == NULL)
		return (i);

	current = h;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
