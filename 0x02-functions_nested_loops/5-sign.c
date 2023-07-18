#include "main.h"

/**
 * print_sign - function defination.
 *
 * @n: Parametrs recieved by function calling.
 *
 * Description: check if number is zero or positive or negative.
 *
 * Return: Depend on the value passed to the function return 0
 * if the number is zero, return 1 if the number is positive and
 * return -1 if the nubmer is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
