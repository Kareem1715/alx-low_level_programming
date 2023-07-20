#include "main.h"


/**
 * print_triangle - Entery point
 *
 * @size:parameter recieved by calling function.
 *
 * Description: draws a triangle.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = (size - i); j > 1; j--)
				_putchar(' ');

			for (k = 0; k <= i; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
