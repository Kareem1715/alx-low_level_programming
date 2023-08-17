#include "variadic_functions.h"

/**
 * sum_them_all - sum the numbers.
 *
 * @n: The number of passed arguments.
 *
 * Description: This function sum all the given numbers by args.
 *
 * Return: The sumation of numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argsVar;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(argsVar, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argsVar, int);

	va_end(argsVar);
	return (sum);
}
