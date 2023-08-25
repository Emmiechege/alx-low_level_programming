#include "lists.h"
#include <stdio.h>

/**
 * list_len - finds the number of elements in a linked list_t list.
 * @h: pointer to the first node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elem_no = 0;
	 while (h != NULL)
	 {
		 elem_no++;

		 h = h->next;
	 }
	 return (elem_no);
}
