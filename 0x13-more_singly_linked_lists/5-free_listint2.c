#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *temporary_node;

	if (head == NULL)
		return;

	current_node = *head;
	while (current_node != NULL)
	{
		temporary_node = current_node;
		current_node = current_node->next;
		free(temporary_node);
	}

	*head = NULL;
}
