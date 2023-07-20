#include "main.h"


/**
 * print_diagonal - Entery point
 *
 * @n:parameter recieved by calling function.
 *
 * Description: draws a diagonal line
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
