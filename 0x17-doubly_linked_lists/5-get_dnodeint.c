#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: pointer to linkedlist
 * @index: position of the node needed
 *
 * Return: Node at specified position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *tmp = NULL;

	tmp = head;
	count = 0;

	while (tmp)
	{
		if (count == index)
		{
			return (tmp);
		}
		count++;
		tmp = tmp->next;
	}
	return (tmp);
}
