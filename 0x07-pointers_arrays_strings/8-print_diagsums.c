#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entery point.
 *
 * @a: string parameter.
 * @size: integar parameter.
 *
 * Description: prints the sum of daigonal and reverse diagonal.
 *
 * Return: Nothing (void function).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag = 0, revdiag = 0;

	for (i = 0; i < size; i++)
	{
		diag += a[(size * i) + i];
		revdiag += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", diag, revdiag);
}
