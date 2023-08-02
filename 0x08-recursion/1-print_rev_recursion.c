#include "main.h"

/**
 * _print_rev_recursion - Entery point.
 *
 * @s: string parameter.
 *
 * Description: prints a string in reverse.
 *
 * Return: nothing (void function).
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
