#include "main.h"

/**
 * print_rev - Entery point
 *
 * @s: char pointer parameter.
 *
 * Description: print a string.
 *
 * Return: nothing it is a void function.
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;

	j = 0;
	for (j = i - 1; s[j] > 0; j--)
		_putchar (s[j]);

	_putchar ('\n');
}
