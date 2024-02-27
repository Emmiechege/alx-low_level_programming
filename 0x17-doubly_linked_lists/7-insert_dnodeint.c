#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts newnode at a given index
 * @h: pointer to pointer head
 * @idx: index at which to insert newnode
 * @n: data to store in the newnode
 *
 * Return: address of newnode; null if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *newnode;
	unsigned int i;

	if (!h)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		tmp = *h;
		i = 1;
		while (i < idx && tmp)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL && i == idx)
			return (add_dnodeint_end(h, n));
		else if (tmp)
		{
			newnode = malloc(sizeof(dlistint_t));
			if (!newnode)
				return (NULL);
			newnode->n = n;
			newnode->next = NULL;
			newnode->prev = NULL;
			newnode->next = tmp->next;
			newnode->prev = tmp;
			if (tmp->next != NULL)
				tmp->next->prev = newnode;
			tmp->next = newnode;

			return (newnode);
		}
		return (NULL);
	}
}
