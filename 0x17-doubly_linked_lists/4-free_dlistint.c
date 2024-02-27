#include "lists.h"

/**
 *free_dlistint - frees the list.
 *@head: pointer to the head node.
 *
 *Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
