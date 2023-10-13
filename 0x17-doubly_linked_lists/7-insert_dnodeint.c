#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: head pointer point to first node
 * @idx: idx of node you want to insert
 * @n: value of node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *trv = *h;
	size_t i;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h || idx < 0)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		new->prev = NULL;
		return (new);
	}
	for (i = 0; trv; i++)
	{
		if (i == idx - 1)
		{
			new->next = trv->next;
			trv->next = new;
			new->prev = trv;
			return (new);
		}
		trv = trv->next;
	}
	return (NULL);
}
