#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - Entry point function
 *
 * @n: parmeter passed by calling the function.
 *
 * Return: Always 0 (Success)
 *
 * Description: print from the given number to 98.
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}

	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
			printf("%d, ", j);
		printf("\n");
	}
}
