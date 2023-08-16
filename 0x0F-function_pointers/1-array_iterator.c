#include "function_pointers.h"

/**
 * array_iterator - function pointer
 *
 * @array: Pass the name of array.
 * @size: The size of passed array.
 * @action: The function pointer that we call.
 *
 * Description: This function print the number of array followed by new line
 * and print the numbers in hexadecimal.
 *
 * Return: Nothing it is only print.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (size == 0 || array == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
