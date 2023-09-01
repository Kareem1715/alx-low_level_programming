#include "main.h"


/**
 * clear_bit - set 0 at index
 *
 * @n: The given decimal number.
 * @index: The given index to set bit.
 *
 * Description: This function sets the value
 * of a bit to 0 at a given index.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
