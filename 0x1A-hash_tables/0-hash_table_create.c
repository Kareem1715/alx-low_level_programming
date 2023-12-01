#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 *
 * @size: length of array
 *
 * Return: a pointer to the newly created hash table or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	
	hash->size = size;

	hash->array = malloc(size * sizeof(hash_node_t));
	if (hash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}
