#include "lists.h"
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position
 * @h: the head
 * @idx: the index of the node, starting from 0
 * @n: the value to insert
 * Return: the address of the element,
 * or NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	new->n = n;
	while (current != NULL)
	{
		if (i == idx)
		{
			new->next = current;
			new->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = new;
			current->prev = new;
			return (new);
		}

		current = current->next;
		i++;
	}

	free(new);

	return (NULL);
}
