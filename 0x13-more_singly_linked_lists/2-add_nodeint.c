#include "lists.h"

/**
 * add_nodeint - Add at the begin.
 *
 * @head: The head node passed to functoin.
 * @n: The value that the newNode will be have.
 *
 * Description: This function add newNode at the begin of list.
 *
 * Return: The first node in list (head).
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
