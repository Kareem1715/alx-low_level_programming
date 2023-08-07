#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entery point
 *
 * @size: size of array.
 * @c: charachter that you want to put in array.
 *
 * Description: update the value of n.
 *
 * Return: pointer of array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');
	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
	free(arr);

}
