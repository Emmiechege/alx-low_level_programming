#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a doubly list
 * @head: pointer to a pointer head
 * @n: data to be added in the newnode
 *
 * Return: the address of the newnode if successfull; null if fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tmp;

	if (!head)
	{
		return (NULL);
	}
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	tmp = *head;
	*head = newnode;
	newnode->next = tmp;

	if (tmp)
		tmp->prev = newnode;

	return (newnode);
}
