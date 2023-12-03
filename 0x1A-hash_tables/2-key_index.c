#include "hash_tables.h"

/**
 * key_index - function give index of key.
 *
 * @key: key of hash table
 * @size: size of the array of hash table
 *
 * Return: The index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
