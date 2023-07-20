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
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	if (num / 10)
		print_number(num / 10);

	 _putchar((num % 10) + '0');
}
