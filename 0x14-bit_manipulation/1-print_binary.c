#include "main.h"


/**
 * print_binary - decimal to binary
 *
 * @n: The given decimal number.
 *
 * Description: This function converts a
 * decimal number to an binary number.
 *
 * Return: the converted number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int i, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;

		if (1 & bin)
		{
			_putchar('1');
			flag++;
		}
		else if (flag != 0)
			_putchar('0');
	}
}
