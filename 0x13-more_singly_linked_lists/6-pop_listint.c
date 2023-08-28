#include "lists.h"


/**
 * pop_listint - delete a node
 *
 * @head: The head node passed to functoin.
 *
 * Description: This function delete the head node of list.
 *
 * Return: The data of deleted head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL) /* IF linked list is empty */
		return (0);

	tmp = *head; /* Copy the head node to tmp node */

	tmp->n = (*head)->n; /* Move the data from head to newHead */
	data = tmp->n; /* Store the head data in data variable */
	*head = (*head)->next; /* Traverse the head to the next node */
	tmp->next = NULL; /* Seperate the tmp node from the chain */
	free(tmp); /* Free the temporary pointer */
	return (data);
}
