#include "hash_tables.h"

/**
 * key_index - determines the hash table array index in which to store a
 * key/value pair
 * @key: key
 * @size: array size
 *
 * Return: index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int intermediate, index;

	intermediate = hash_djb2(key);
	index = intermediate % size;

	return (index);
}
