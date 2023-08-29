#include "lists.h"

/**
 * sum_listint - sum list
 *
 * @head: The head node passed to functoin.
 *
 * Return: The sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	listint_t *trav;
	int sum = 0;

	trav = head;
	while (trav)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
