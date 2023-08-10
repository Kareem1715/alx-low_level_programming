#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entery point
 *
 * @b: sizeof(given) * size
 *
 * Description: This function allocates memory using malloc.
 *
 * Return: void pointer of check.
 */
void *malloc_checked(unsigned int b)
{
	void *check = malloc(b);

	if (check == NULL) /* allocation falis */
		exit(98); /* normal process termination with a status value of 98 */

	return (check);
}
