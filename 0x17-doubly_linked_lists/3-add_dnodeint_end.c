#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of dlinked list
 * @head: double pointer to the head node
 * @n: data of the node
 * Return: adress of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *freshnode = NULL;
	dlistint_t *presentnode = NULL;

	freshnode = malloc(sizeof(dlistint_t));
	if (freshnode == NULL)
		return (NULL);
	freshnode->n = n;

	if (*head)
	{
		presentnode = *head;
		while (presentnode->next != NULL)
			presentnode = presentnode->next;
		freshnode->next = NULL;
		freshnode->prev = presentnode;
		presentnode->next = freshnode;
		return (freshnode);
	}
	freshnode->next = *head;
	freshnode->prev = NULL;
	*head = freshnode;
	return (*head);
}
