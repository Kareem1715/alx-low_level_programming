#include "lists.h"

/**
 * reverse_listint - node index
 *
 * @head: The head node passed to functoin.
 *
 * Description: This function reverses a listint_t linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	ptr1 = NULL, ptr2 = NULL; /* Intial values is NULL */
	while (*head != NULL)
	{
		ptr2 = (*head)->next; /* Make ptr2 point to the second node */
		(*head)->next = ptr1; /* Give the head->next value to ptr1 */
		ptr1 = *head; /* Update ptr1 to point to head */
		*head = ptr2; /* Move the head safely to ptr2 { (*head)->next } */
	}
	*head = ptr1; /* At the end make the head take the value of ptr1 */
	return (*head);
}
