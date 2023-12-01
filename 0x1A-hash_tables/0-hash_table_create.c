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
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	hash->size = size;
	return (hash);
}
