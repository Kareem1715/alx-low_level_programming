#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Adds a new node
 *
 * @head: The head node passed to functoin.
 * @str: The string passed to add_node function.
 *
 * Description: This function adds a new node
 * at the end of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tmp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str); /* string value that node have */
	newNode->len = strlen(str); /* length of string value */
	newNode->next = NULL;

	if (*head == NULL) /* if the head is the last node */
	{
		*head = newNode;
		return (newNode);
	}

	tmp = *head; /* temporary pointer traversing the list */
	while (tmp->next != NULL)
		tmp = tmp->next; /* move the pointer tmp until reach to NULL */

	tmp->next = newNode; /* update (NULL) with newNode at the end */

	return (newNode);
}
