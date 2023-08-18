#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
