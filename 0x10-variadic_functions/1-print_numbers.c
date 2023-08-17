#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 *
 * @separator: The given seperator to separate between numbers.
 * @n: The number of passed arguments.
 *
 *
 * Description: This function print numbers seperated by
 * given seperator by using variadic function.
 *
 * Return: Nothing it is only print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argsVar;
	unsigned int i;
	int nums;

	if (separator == NULL)
		return;
	va_start(argsVar, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(argsVar, int);
		if (i == n - 1)
			printf("%d", nums);
		else
			printf("%d%s", nums, separator);
	}
	printf("\n");

	va_end(argsVar);
}
