#include "main.h"


/**
 * print_number - Entery point
 *
 * @n:parameter recieved by calling function.
 *
 * Description: print number with putchar.
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n / 10)
		print_number(n / 10);

	 _putchar((n % 10) + '0');
}
