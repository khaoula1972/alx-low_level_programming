#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: A double pointer to the head of the list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (size);

	current = *h;
	while (current != NULL)
	{
		size++;
		if (current->next >= current)
		{
			temp = current->next;
			current->next = NULL;
			break;
		}
		temp = current->next;
		free(current);
		current = temp;
	}
	current = temp;
	while (current != NULL)
	{
		size++;
		temp = current->next;
		free(current);
		current = temp;
	}
	*h = NULL;
	return (size);
}
