#include "main.h"

/**
 * print_most_numbers - Entery point
 *
 * Description: print most numbers from 0 to 9 with putchar
 * except 4 and 6.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
