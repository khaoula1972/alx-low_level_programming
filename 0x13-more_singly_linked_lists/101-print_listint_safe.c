#include "lists.h"
#include "1-listint_len.c"
/**
 * print_listint_safe - a function that prints all the elements
 * of a list_tint list.
 * @head: a pointer to the header of the linked list
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	const listint_t *current = head, *loop_node = NULL;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		length++;

		if (current->next >= current)
		{
			loop_node = current->next;
			break;
		}
		current = current->next;
	}

	if (loop_node != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		length++;
	}
	return (length);
}
