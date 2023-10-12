#include "lists.h"

/**
 * add_dnodeint - add node
 *
 * @head: head pointer point to first node
 * @n: value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
