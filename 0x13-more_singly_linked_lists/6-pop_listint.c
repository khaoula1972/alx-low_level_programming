#include "lists.h"
#include "1-listint_len.c"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: a pointer to the head to be removed
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_list;

	if (listint_len(*head) == 0)
		return (0);

	new_list = *head;
	data = new_list->n;
	/*Update *head to point to the next node, */
	/* effectively deleting the head node */
	*head = (*head)->next;
	free(new_list);

	return (data);
}
