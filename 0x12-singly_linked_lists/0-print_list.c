#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list of struct.
 *
 * @h: The head node passed to functoin.
 *
 * Description: This prints all the elements of a list_t list.
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0; /* Strat from the first node head */

	while (h) /* If head not equal NULL */
	{
		if (h->str == NULL) /* If str is NULL */
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next; /* Make the head point to the next node */
		n++;
	}
	return (n);
}
