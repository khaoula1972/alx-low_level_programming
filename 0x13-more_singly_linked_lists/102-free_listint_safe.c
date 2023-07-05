#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: A double pointer to the head of the list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (size);

	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		size++;
		if (temp <= *h)
			break;
	}
	*h = NULL;
	return (size);
}
