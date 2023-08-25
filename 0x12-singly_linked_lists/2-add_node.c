#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds anew node at the beggining of a list_t list.
 * @head: a double pointer to the list_t,points to head of linked list.
 * @str: the string to be added as anew node in the linked list
 * Return: address of the new element on success
 * NULL on failure.
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
