#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entery point
 *
 * @min: minimum and first number in array.
 * @max: maximum and last number in array.
 *
 * Description: make array and malloc it.
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arry;
	int i, k = 0;

	if (min > max)
		return (NULL);
	/* (max - min + 1) --> number of elements */
	arry = malloc(sizeof(int) * (max - min + 1));
	if (!arry)
		return (NULL);

	for (i = min; i <= max; i++)/* moving the elements to array */
		arry[k++] = i; /* k start form 0 and increase */

	return (arry);
}
