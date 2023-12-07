#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beggining of dlinked list
 * @head: double pointer to the first node
 * @n: data of the node
 * Return: address of the new element, or null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *freshnode;

	freshnode = malloc(sizeof(dlistint_t));
	if (freshnode == NULL)
		return (NULL);
	freshnode->n = n;
	freshnode->prev = NULL;
	freshnode->next = *head;

	if (*head != NULL)
		(*head)->prev = freshnode;
	*head = freshnode;

	return (freshnode);
}
