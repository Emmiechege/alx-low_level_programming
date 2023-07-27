#include "lists.h"
#include <stddef.h>

/**
 * print_list - Prints the elements of a list_t list
 * @h: the pointer to the first node
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)");
		node_count++;
		h = h->next;
	}
	return (node_count);
}

