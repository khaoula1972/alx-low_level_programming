#include "lists.h"
/**
 * get_nodeint_at_index - a function that  returns the nth node
 * of a listint_t linked list.
 * @h: a pointer to the header of the linked list
 * @index: the index of the node to be returned
 * Return: the number of nodes.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int length = 0;

	while (head != NULL)
	{
		length++;
		if (length == index + 1)
			return (head);
		head = head->next;
	}
	return (NULL);
}
