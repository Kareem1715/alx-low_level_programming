#include "variadic_functions.h"

/**
 * print_all - print numbers.
 *
 * @format: The format is a list of types of arguments passed to the function.
 *
 * Description: This function print anything char, int, float, string.
 *
 * Return: Nothing it is only print.
 */
void print_all(const char * const format, ...)
{
	va_list argsVar;
	int i = 0;
	char *str, *separator = ""; /* At first print no separator */

	va_start(argsVar, format);
	if (format != NULL) /* IF no string given condition false  */
	{
		while (format[i] != '\0') /*    "ceis\0"   */
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argsVar, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(argsVar, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argsVar, double));
					break;
				case 's':
					str = va_arg(argsVar, char*);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default: /* If the char not match with any of the above cases */
					i++; /* like char 'e' in "ceis\0" test */
					continue;
			}
			separator = ", "; /* After first print make comma and space as separators */
			i++;
		}
	}
	printf("\n");
	va_end(argsVar);
}
