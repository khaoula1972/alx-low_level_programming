#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the hash table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	/* Allocating memory for the array of pointers */
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	/* Initializing each elt to NULL */
	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;

	new_hash_table->size = size;

	return (new_hash_table);
}
