#include "main.h"

/**
 * puts2 - Entery point
 *
 * @str: char pointer parameter.
 *
 * Description: print a string.
 *
 * Return: nothing it is a void function.
 */
void puts2(char *str)
{
	int i, length;

	length = 0;
	while (str[length] != '\0')
		length++;

	for (i = 0; i < length; i += 2)
		_putchar (str[i]);

	_putchar ('\n');
}
