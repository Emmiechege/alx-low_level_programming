#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beggining of a list_t list.
 * @head: Adouble pointer to list_t (a pointer to a pointer
 * that points to rhe head of the linked list)
 * @str: The string to be added as a new node in the linked list
 *
 * Return: The address of the new element - Success
 * NULL - if it failled
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}


