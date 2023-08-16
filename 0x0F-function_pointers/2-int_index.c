#include "function_pointers.h"

/**
 * int_index - function pointer
 *
 * @array: Pass the name of array.
 * @size: The size of passed array.
 * @cmp: The function pointer that we call to compare.
 *
 * Description: This function invoke cmp function pointer
 * to compare.
 *
 * Return: The element index in array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (0);
}
