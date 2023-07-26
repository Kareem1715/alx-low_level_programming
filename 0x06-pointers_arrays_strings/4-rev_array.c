#include "main.h"

/**
 * reverse_array - Entery point.
 *
 * @a: integar pointer parameter.
 * @n: integar pointer parameter.
 *
 * Description: reverse the array.
 *
 * Return: nothing (it is a void function).
 */
void reverse_array(int *a, int n)
{
	int fir_idx, las_idx, tmp;

	fir_idx = 0;
	las_idx = n - 1;
	while (fir_idx < las_idx)
	{
		tmp = a[fir_idx];
		a[fir_idx] = a[las_idx];
		a[las_idx] = tmp;

		fir_idx++;
		las_idx--;
	}

}
