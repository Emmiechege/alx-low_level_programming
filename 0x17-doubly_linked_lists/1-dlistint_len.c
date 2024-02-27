#include "lists.h"

/**
 * dlistint_len - func to print number of elements in a list
 * @h: head pointer
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int count;

	tmp = h;

	count = 0;

	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
