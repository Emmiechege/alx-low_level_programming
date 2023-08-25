#include "lists.h"

/**
 * free_list - function that frees alinked list
 * @head: head node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *temp;

	if (ptr == NULL)
		return;
	while (ptr->next)
	{
		temp = ptr->next;
			free(ptr->str);
		free(ptr);
		ptr = temp;
	}

	free(ptr->str);
	free(ptr);
}
