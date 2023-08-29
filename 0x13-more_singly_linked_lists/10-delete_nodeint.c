#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 *
 * @head: The head node passed to functoin.
 * @index: The index of the node, starting at 0.
 *
 * Description: This function deletes the node at
 * index index of a listint_t linked list.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav, *dlet;

	if (*head == NULL)
		return (-1);

	trav = *head;
	dlet = *head;
	if (index == 0) /* If you need to delete the first node */
	{
		*head = dlet->next;
		free(dlet);
		dlet = NULL;
		return (1);
	}
	while (index)
	{   /* trav pointer point to the previous node of dlet node point to */
		trav = dlet;
		dlet = dlet->next;
		index--;
	}
	/* Make the previous node of dlet (trav) point to the next node of dlet */
	trav->next = dlet->next; /* In separate the trav node from the dlet node*/
	free(dlet); /* Delete the node */
	dlet = NULL;

	return (1);

}
