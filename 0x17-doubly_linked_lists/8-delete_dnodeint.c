#include "lists.h"
#include "1-dlistint_len.c"
/**
 * delete_dnodeint_at_index -  a function that deletes the node
 * at index of a dlistint_t linked list.
 * @head: the linked list
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currenti, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index > dlistint_len(*head))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;

		free(temp);
		return (1);
	}

	current = *head;

	while (current != NULL)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
