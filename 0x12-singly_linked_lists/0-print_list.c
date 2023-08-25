#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a lnked list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;

		h = h->next;
	}
	return (counter);
}
