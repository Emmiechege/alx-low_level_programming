#include "lists.h"

/**
 * free_listint - frees a linked list of type listint_t
 * @head: a pointer to the head of the liked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head; /* create ointer to traverse list */
	listint_t *next_node; /* create pointer to store the next node */

	while (current_node != NULL) /* traverses to end of list */
	{
		next_node = current_node->next; /* stores the next node */
		free(current_node);
		current_node = next_node; /* moves to the next node */
	}
}
