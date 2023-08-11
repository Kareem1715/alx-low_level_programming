#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entery point
 *
 * @ptr: pointer to the memory previously allocated.
 * @old_size: the size in bytes of the allocated space for ptr.
 * @new_size:  the new size in bytes of the new memory block.
 *
 * Description: This function reallocates a memory block using malloc and free.
 *
 * Return: the void pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newalloc;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		newalloc = malloc(new_size);
		if (!newalloc) /* if malloc return null or 0 */
			return (NULL);
		return (newalloc);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		newalloc = malloc(new_size);
		if (!newalloc)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)newalloc + 1) = *((char *)ptr + 1);
	}


	return (newalloc);
}
