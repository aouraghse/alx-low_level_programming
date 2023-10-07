#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	unsigned int alert = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i])
		{
			temp = (ht->array)[i];
			if (alert)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			alert++;
			temp = temp->next;
			while (temp)
			{
				printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
