#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 *
 * @head: head pointer point to first node
 * @index: idx of node you want to insert
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *trv = *head, *tmp = NULL;
    size_t i;
    
    if (index == 0 && *head)
    {
        *head = (*head)->next;
        return (1);
    }

    for (i = 0; trv; i++)
    {
        if (i == index - 1 && trv->next && trv->next->next)
        {
            tmp = trv->next->next;
            tmp->prev = trv;
            trv->next = tmp;
            return (1);
        }
        trv = trv->next;
    }
    return (-1);
        
}
