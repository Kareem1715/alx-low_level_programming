#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entery point
 *
 * @nmemb: number of elements.
 * @size: number of bytes.
 *
 * Description: allocation array with calloc.
 *
 * Return: The allocated memory of array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;

	if (!nmemb || !size)
		return (NULL);

	cal = calloc(nmemb, size);
	if (!cal)
		return (NULL);

	return (cal);
}
