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
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; i < 98 && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
