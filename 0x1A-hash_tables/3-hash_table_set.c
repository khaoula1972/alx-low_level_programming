#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @key: the key
 * @ht: the hash table
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key exists */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value); /* To free the old value */
			temp->value = strdup(value);
			return (temp->value ? 1 : 0);
		}
		temp = temp->next;
	}

	/* If key doesn't exist */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * create_node - Creates a new hash_node_t.
 * @key: the key
 * @value: the value associated with the key.
 * Return: A pointer to the newly created node, or NULL on failure.
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	return (new_node);
}
