#include "lists.h"

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
	int n = 1; /* Strat from the first node head */

	if (h->str == NULL || h->next == NULL) /* If str = null */
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);

	printf("[%d] %s\n", h->next->len, h->next->str);
	n++;
	return (n);
}
