#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: A pointer to the address of the head of the first node
 * @n: integer for the new node to be added
 * Return: address of the new element,or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			listint_t *current = *head;

			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = new_node;
		}
	}
	return (new_node);
}
