#include "main.h"

/**
 * factorial - Entery point.
 *
 * @n: integar parameter.
 *
 * Description: factorial of number.
 *
 * Return: Integar.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
