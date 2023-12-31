#include "main.h"

/**
 * _strchr - Entery point.
 *
 * @s: string parameter.
 * @c: character parameter.
 *
 * Description: locates a character in a string.
 *
 * Return: pointer .
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return (0);
}
