#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of pointer array
 *
 * Return: pointer to created hash table if successful.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht_ptr;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht_ptr = malloc(sizeof(hash_table_t));
	if (ht_ptr == NULL)
		return (NULL);

	ht_ptr->size = size;
	ht_ptr->array = malloc(sizeof(hash_node_t *) * size);

	if (ht_ptr->array == NULL)
	{
		free(ht_ptr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(ht_ptr->array)[i] = NULL;

	return (ht_ptr);
}
