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
	static int length;

	if (*s != '\0')
	{
		length++;
		_strlen_recursion(s + 1);
	}

	return (length);
}
