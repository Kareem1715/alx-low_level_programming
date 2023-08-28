#include "lists.h"


/**
 * free_listint - free a new list
 *
 * @head: The head node passed to functoin.
 *
 * Description: This function free the value of newNode
 * and free the whole node until last node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
