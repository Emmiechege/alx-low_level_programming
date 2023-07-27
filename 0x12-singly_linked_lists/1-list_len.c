#include "lists.h"
#include <stdio.h>

/**
 * list_len - Finds the number of elements in a linked list_t list.
 * @h: pointer to the first node
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elem_count = 0;

	while (h != NULL)
	{
		elem_count++;

		h = h->next;  /*move to the next node*/
	}
	return (elem_count); /*Return the ttl number of nodes in the list*/
}
