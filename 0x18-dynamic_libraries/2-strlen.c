#include "main.h"

/**
 * _strlen - Entery point
 *
 * @s: char parameter.
 *
 * Description: returns the length of a string.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
