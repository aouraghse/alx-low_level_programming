#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i])
		{
			temp = (ht->array)[i];
			while (temp)
			{
				(ht->array)[i] = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = (ht->array)[i];
			}
		}
	}
	free(ht->array);
	free(ht);
}
