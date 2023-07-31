#include "main.h"

/**
 * _memcpy - Entery point.
 *
 * @dest: string parameter.
 * @src: string parameter.
 * @n:  unsigned integar parameter.
 *
 * Description: copies memory area.
 *
 * Return: string poniter.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
