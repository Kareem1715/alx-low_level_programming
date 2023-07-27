#include "main.h"

/**
 * print_number - Entery point.
 *
 * @n: integar parameter.
 *
 * Description: print numbers.
 *
 * Return: nothing it is a void function.
 */
void print_number(int n)
{
    unsigned int num;
    
    num = n;
    if (n < 0)
    {
        num = -num;  
        _putchar('-');     
    }

    if (num / 10)
        print_number(num / 10);
    
    _putchar((num % 10) + '0');
}
