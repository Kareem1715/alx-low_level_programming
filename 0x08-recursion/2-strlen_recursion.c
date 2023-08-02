#include "main.h"

/**
 * _strlen_recursion - Entery point.
 *
 * @s: string parameter.
 *
 * Description: returns the length of a string.
 *
 * Return: Integar.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (0);

	length = 1 + _strlen_recursion(s + 1);

	return (length);
}
