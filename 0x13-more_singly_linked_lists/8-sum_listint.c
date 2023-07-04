#include "lists.h"
#include "1-listint_len.c"
/**
 * sum_listint - a function that  returns the  sum of all the data (n)
 * of a listint_t linked list.
 * @head: a pointer to the header of the linked list
 * Return: the number of nodes.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
