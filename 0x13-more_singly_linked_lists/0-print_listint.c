#include "lists.h"

/**
 * print_listint - print list of struct.
 *
 * @h: The head node passed to functoin.
 *
 * Description: This prints all the elements of a listint_t list.
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeNum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeNum++;
	}
	return (nodeNum);
}
