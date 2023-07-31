#include "main.h"

/**
 * _strchr - Entery point.
 *
 * @s: string parameter.
 * @c: character parameter.
 *
 * Description: copies memory area.
 *
 * Return: locates a character in a string.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; ; i++)
		if (s[i] == c)
			return (s + i);

	return (0);
}
