#include "function_pointers.h"

/**
 * print_name - function pointer
 *
 * @name: The name (string) passed to function.
 * @f: The functino passed to the print_name function.
 *
 * Description: This function in first test case print the passed name
 * and in the second test case print the passed name in upper case.
 *
 * Return: Nothing it is only print.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
