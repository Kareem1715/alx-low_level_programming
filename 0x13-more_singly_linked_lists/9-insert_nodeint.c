#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 *
 * @head: The head node passed to functoin.
 * @idx: The index of the node, starting at 0.
 * @n: The value of node you want to add to list.
 *
 * Description: This function insertsa new node
 * at a given position.
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *newNode;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;


	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	trav = *head;
	while (trav)
	{

		if (i == idx - 1)
		{   /* First attach the new node with the next node in list */
			newNode->next = trav->next;
			trav->next = newNode; /* Second make the trav ptr point to newNode */
			return (newNode);
		}
		trav = trav->next;
		i++;
	}
	/* If it is not possible to add the new node at index idx return NULL */
	return (NULL);

}
