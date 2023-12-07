#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a dlinked list
 * @h: pointer to the head node
 * Return: numbers of elements of dlinked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t idx = 0;

	while (h != 0)
	{
		idx++;
		h = h->next;
	}
	return (idx);
}
