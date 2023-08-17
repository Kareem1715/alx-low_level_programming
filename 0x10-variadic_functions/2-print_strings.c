#include "variadic_functions.h"

/**
 * print_strings - print strings.
 *
 * @separator: The given seperator to separate between strings.
 * @n: The number of passed arguments.
 *
 * Description: This function print strings seperated by
 * given seperator by using variadic function.
 *
 * Return: Nothing it is only print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argsVar;
	unsigned int i;
	char *str;

	va_start(argsVar, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argsVar, char*);
		if (*str == '\0')
			str = "(nil)";

		if (i == n - 1 || separator == NULL)
			printf("%s", str);

		else
			printf("%s%s", str, separator);
	}
	printf("\n");

	va_end(argsVar);
}
