#include "lists.h"
#include "2-add_nodeint.c"
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: a pointer to the header of the linked list
 * @idx: the index of the node to be inserted
 * @n: tha value to be inserted.
 * Return: the number of nodes.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *inserted_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	inserted_node = malloc(sizeof(listint_t));
	if (inserted_node == NULL)
		return (NULL);

	inserted_node->n = n;

	if (idx == 0)
	{
		add_nodeint(head, n);
		return (*head);
	}

	temp = *head;
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	if (temp == NULL && i < idx - 1)
	{
		free(inserted_node);
		return (NULL);
	}

	inserted_node->next = temp->next;
	temp->next = inserted_node;

	return (inserted_node);
}
