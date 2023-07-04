#include "lists.h"
/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: a pointer to the head
 * @n: the value to be stored.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k; /* our new node to be added */

	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);

	k->n = n;
	k->next = *head;
	*head = k;

	return (k);
}
