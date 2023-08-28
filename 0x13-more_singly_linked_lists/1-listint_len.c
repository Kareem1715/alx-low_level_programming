#include "lists.h"

/**
 * listint_len - Number of nodes.
 *
 * @h: The head node passed to functoin.
 *
 * Description: This return all the elements of a listint_t list.
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeNum = 0;

	while (h != NULL)
	{
		nodeNum++;
		h = h->next;
	}
	return (nodeNum);
}
