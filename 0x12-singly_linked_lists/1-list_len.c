#include "lists.h"

/**
 * list_len - number of list struct.
 *
 * @h: The head node passed to functoin.
 *
 * Return: The number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0; /* Strat from the first node head */

	while (h) /* If head not equal NULL */
	{
		h = h->next; /* Make the head point to the next node */
		n++;
	}
	return (n);
}
