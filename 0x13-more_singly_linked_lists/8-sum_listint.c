#include "lists.h"

/**
 * get_nodeint_at_index - node index
 *
 * @head: The head node passed to functoin.
 * @index: The index of the node, starting at 0.
 *
 * Description: This function return the node with
 * the given index to print the value of this node.
 *
 * Return: The nth node of a listint_t linked list.
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
