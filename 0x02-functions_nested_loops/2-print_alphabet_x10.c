#include "main.h"

/**
 * print_alphabet_x10 - Invoke the code
 *
 * Description: print alpabet 10 times
 *
 * Return: void function don't need to return
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	}

}
