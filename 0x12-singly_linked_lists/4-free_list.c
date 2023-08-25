#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_list - free a new list
 *
 * @head: The head node passed to functoin.
 *
 * Description: This function free the str in node
 * and free the whole node until last node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next; /* Move to the next node to free */
	}
}
