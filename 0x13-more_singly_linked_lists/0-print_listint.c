#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements of a linked list.
 * @h: header pointer to the first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
