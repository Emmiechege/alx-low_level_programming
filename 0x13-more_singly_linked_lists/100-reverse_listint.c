#include "lists.h"
/**
 * reverse_listint - reverses the listint_t list
 *
 * @head: pointer to  a pointer to head
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *temp;

	temp = *head;

	if (temp == NULL)
		return (NULL);

	prev = temp->next;
	temp->next = NULL;


	while (prev != NULL)
	{
		temp = prev;
		prev = prev->next;
		temp->next  = *head;
		*head = temp;
	}

	return (*head);
}
