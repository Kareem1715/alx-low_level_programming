#include "main.h"


/**
 * get_bit - value of bit
 *
 * @n: The given decimal number.
 * @index: the index that the bit is found or not.
 *
 * Return: the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if (((1 << index) & n) == 0)
		return (0);
	else
		return (1);
}
