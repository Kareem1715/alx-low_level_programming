#include "main.h"

/**
 * flip_bits - XOR
 *
 * @n: The first decimal number.
 * @m: The second decimal number
 *
 * Return: returns the number of bits you would need
 * to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int res, cnt = 0;

	res = n ^ m;
	while (res)
	{
		if (res & 1)
			cnt++;
		res = res >> 1;
	}

	return (cnt);
}
