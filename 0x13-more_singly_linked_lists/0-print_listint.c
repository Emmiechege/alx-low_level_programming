#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements of a linked list.
 * @h: header pointer to the first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
