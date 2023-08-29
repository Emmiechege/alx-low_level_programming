#include "lists.h"

/**
 * listint_len - returns the number of elements of a linked_list t.
 * @h: The pointer to the first node of a linked list.
 * Return: Number of the elements in the linked list.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
