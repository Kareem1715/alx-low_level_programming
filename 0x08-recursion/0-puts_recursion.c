#include "main.h"

/**
 * _puts_recursion - Entery point.
 *
 * @s: string parameter.
 *
 * Description: prints a string
 *
 * Return: nothing (void function).
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_puts_recursion(s);
	return;

}
