#include "main.h"

/**
 * _memset - Entery point.
 *
 * @s: string parameter.
 * @b: char parameter.
 * @n:  unsigned integar parameter.
 *
 * Description: fills memory with a constant byte.
 *
 * Return: string poniter.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];
    
    return(dest);
}
