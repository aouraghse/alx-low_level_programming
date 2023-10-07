#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key mapping to value
 * @value: value
 *
 * Return: 1 (success) or 0 (failure.)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp_node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || key[0] == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp_node = (ht->array)[index];
	if (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = (ht->array)[index];
	(ht->array)[index] = new_node;

	return (1);
}
