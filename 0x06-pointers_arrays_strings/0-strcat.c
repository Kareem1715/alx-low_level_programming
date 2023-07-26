#include "main.h"

/**
 * _strcat - Entery point
 *
 * @dest: char pointer parameter.
 * @src: char pointer parameter.
 *
 * Description: print a string.
 *
 * Return: nothing it is a void function.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	src_len = 0;
	while (dest[src_len] != '\0')
		src_len++;

	for (i = 0; i <= src_len + 1; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
