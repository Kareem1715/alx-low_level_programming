#include "main.h"

int power(int bas, int exp);


/**
 * binary_to_uint - binary to decimal
 *
 * @b: The given binary string.
 *
 * Description: This function converts a
 * binary number to an unsigned int.
 *
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, sum = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0') /* Make b point to the last digit in string */
		b++;

	b--; /* Start from last digit */
	while (*b != '\0')
	{
		if (*b == '1')
			sum += power(2, i);
		/* If b = 1011 --> sum = 1*(2^0) + 1*(2^1) + 0*(2^2) + 1*(2^3) and so on */
		else if (*b != '0')
			return (0); /* IF the given char not 0 or 1 */

		b--;
		i++;
	}

	return (sum);
}

/**
 * power - power function
 *
 * @bas: base of number.
 * @exp: exponent of number.
 *
 * Return: the power of given number.
 */
int power(int bas, int exp)
{
	int res = 1;

	while (exp)
	{
		res *= bas;
		exp--;
	}
	return (res);
}
