#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - Adds a new node
 *
 * @head: The head node passed to functoin.
 * @str: The string passed to add_node function.
 *
 * Description: This function adds a new node
 * at the beginning of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str); /* add string to new node */
	new->len = strlen(str); /* add length to new node */
	new->next = *head; /* attach new node with the node pointed by head */
	*head = new; /* make the head point to new node */

	return (*head);
}
