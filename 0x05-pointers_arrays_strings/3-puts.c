#include "main.h"

/**
 * _puts - Entery point
 *
 * @str: char pointer parameter.
 *
 * Description: print a string.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar (str[i]);
	_putchar ('\n');

}
