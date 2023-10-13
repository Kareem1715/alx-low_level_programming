#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 *
 * @head: head pointer point to first node
 * @index: idx of node you want to insert
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trv = *head, *tmp = NULL;
	size_t i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
		if (*head)
			(*head)->prev = NULL;

		return (1);
	}

	while (i != index - 1)
	{
		trv = trv->next;
		i++;
	}

	if (trv->next == NULL)
	{
		tmp = trv->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		tmp = trv->prev;
		tmp->next = trv->next;
		trv->next->prev = tmp;
		free(trv);
		return (1);
	}
	return (-1);

}
