#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * @n: parameter of fuction
 *
 * Return: Always 0 (Success)
 *
 * Description: positive or negative or zero
 */
void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

}
