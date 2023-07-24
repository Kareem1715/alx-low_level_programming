#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Entery point
 *
 * @dest: char pointer parameter.
 * @src: char pointer parameter.
 *
 * Description: copy a string.
 *
 * Return: dest pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (src[length] != '\0')
		length++;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
