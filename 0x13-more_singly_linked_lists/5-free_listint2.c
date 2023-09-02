#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the head of the linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_ptr; /*creates pointer to temporarily store next node */

	if (head == NULL) /* check if head pointers is null */
	{
		return;
	}
	while (*head != NULL) /* traverse until end of list */
	{
		temp_ptr = (*head)->next; /* store the next node temporarily */
		free(*head); /* frees current node */
		*head = temp_ptr; /* move head pointer to next node */
	}
	head = NULL; /* set head pointer to null to indicate empty list */
}

