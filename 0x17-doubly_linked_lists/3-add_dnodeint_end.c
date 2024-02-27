#include "lists.h"

/**
 * add_dnodeint_end - adds newnode at the end of doubly linked list
 * @head: pointer to pointer to head
 * @n: data to add to the newnode
 *
 * Return: address of the newnode on success; null if fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	tmp = *head;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
	newnode->prev = tmp;
	tmp = newnode;

	return (newnode);
}
