#include "lists.h"

/**
 * add_dnodeint_end - inserts a new node at a given position.
 *
 * @h: head pointer point to first node
 * @idx: idx of node you want to insert
 * @n: value of node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *trv = *h;
    size_t i;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = NULL;
    
    for (i = 0; trv; i++)
    {
        if (i == idx)
        {
            new->next = trv->next;
            trv->next = new;
            new->prev = trv;
            return (trv);
        }
        trv = trv->next;
    }
    return (NULL);
}
