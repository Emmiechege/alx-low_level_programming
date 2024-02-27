#include "lists.h"

/**
 * sum_dlistint - sums up the data stored in a linked list
 * @head: pointer to the linked list
 *
 * Return: sum of the data stored in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (!head)
		return (0);
	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
