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
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trav;
	unsigned int i = 0;

	trav = head;
	while (trav != NULL)
	{
		if (i == index)
			return (trav);

		trav = trav->next;
		i++;
	}
	return (NULL);


}
