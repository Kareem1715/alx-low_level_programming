#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: print alphatbet lowercase a to z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
    int i;
    
    for (i = 'a'; i <= 'z'; i++)
        putchar(i);

    putchar('\n');

    return (0);
}
