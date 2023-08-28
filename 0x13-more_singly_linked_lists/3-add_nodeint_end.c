#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at end.
 *
 * @head: The head node passed to functoin.
 * @n: The integar passed to add_nodeint_end function.
 *
 * Description: This function adds a new node
 * at the end of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
	return (newNode);
}
