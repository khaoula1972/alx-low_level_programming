#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void before_main(void) __attribute__((constructor));

/**
 * before_main -  a function that prints
 * You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n
 * before main.c
 */
void before_main(void)
{
	list_t *head = NULL;

	add_node_end(&head, "You're beat! and yet, you must allow,");
	add_node_end(&head, "I bore my house upon my back!");

	print_list(head);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 * Return: pointer to the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("(nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
