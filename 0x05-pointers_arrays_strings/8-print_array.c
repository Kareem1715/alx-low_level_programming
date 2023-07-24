#include "main.h"
#include <stdio.h>
/**
 * print_array - Entery point
 *
 * @a: integar pointer parameter.
 * @n: integar parameter.
 * Description: print a array.
 *
 * Return: nothing it is a void function.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] != a[n - 1])
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

	}

	printf("\n");

}
