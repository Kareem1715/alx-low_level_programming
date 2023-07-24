#include "main.h"

/**
 * swap_int - Entery point
 *
 * @a: declare pointer parameter
 * @b: declare pointer parameter
 *
 * Description: swaps the values of two integers.
 *
 * Return: (nothing) void function.
 */
void swap_int(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
