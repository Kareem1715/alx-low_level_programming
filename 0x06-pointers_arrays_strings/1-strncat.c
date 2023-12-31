#include "main.h"

/**
 * _strncat - Entery point
 *
 * @dest: char pointer parameter.
 * @src: char pointer parameter.
 * @n: integar parameter.
 *
 * Description: concatenates two strings with n.
 *
 * Return: poniter of string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
