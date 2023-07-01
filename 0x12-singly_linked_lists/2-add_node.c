#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list.
 * @head: a pointer to the head
 * @str: the value to be duplicated and stored.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(sizeof(list_t));
	if (duplicate == NULL)
		return (NULL);

	duplicate->str = strdup(str);
	if (duplicate->str == NULL)
	{
		free(duplicate);
		return (NULL);
	}
	
	duplicate->len = strlen(str);
	duplicate->next = *head;
	*head = duplicate;

	return (duplicate);
}
