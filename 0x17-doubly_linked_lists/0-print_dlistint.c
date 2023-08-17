#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list
 * @h: the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int number;
	size_t i = 0;

	if (h == NULL && h->next == NULL)
		return (i);

	current = *h;

	while (current != NULL)
	{
		number = current->n;
		current = current->next;
		printf("%d", number);
		i++;
	}
	return (i);
}
