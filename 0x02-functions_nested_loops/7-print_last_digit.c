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
	num = num % 10;
	if (num < 0)
		return (num);
	else
		return (_putchar(num + '0'));


}
