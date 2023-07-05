#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the list
 * Return: The address of the node where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);
	
	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}

	}
	return (NULL);
}
