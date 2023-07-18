#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @num: parameter recieveb by calling the function.
 *
 * Return: Always 0 (Success)
 *
 * Description: Print the last digit of number.
 */
int print_last_digit(int num)
{
	int digit;

	if (num < 0)
		digit = (num % 10) * -1;
	else
		digit = num % 10;

	_putchar(digit + '0');
	return (digit);

}
