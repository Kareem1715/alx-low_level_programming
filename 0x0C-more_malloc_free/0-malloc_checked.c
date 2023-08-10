#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entery point
 *
 * @size: size of array.
 * @c: charachter that you want to put in array.
 *
 * Description: update the value of n.
 *
 * Return: pointer of array.
 */
void *malloc_checked(unsigned int b)
{

    malloc(b);
    if (malloc(b) == NULL)
        exit(98);
  
    return (malloc(b));
}
