#include "lists.h"

/**
 * get_nodeint_at_index - node index
 *
 * @head: The head node passed to functoin.
 * @index: The index of the node, starting at 0.
 *
 * Description: This function return the node with
 * the given index to print the value of this node.
 *
 * Return: The nth node of a listint_t linked list.
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
