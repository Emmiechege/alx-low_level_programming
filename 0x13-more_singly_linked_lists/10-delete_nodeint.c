#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer with the address of the head of linked list
 * @index: index of the node that should be deleted.index starts at 0
 * Return: if if successful,-1 if it fals
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;/*declares ptr to current node*/
	listint_t *prev_node = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next; /*update head ptr to skip first node*/
		free(current_node);/*frees memory of deleted node*/
		return (1);
	}
	while (current_node != NULL && count < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		count++;
	}
	if (count == index && current_node != NULL)
	{
		prev_node->next = current_node->next;/*update previous nodes next ptr*/
		free(current_node);/*frees memory of deleted node*/
		return (1);
	}
	else
	{
		return (-1); /*index is out of range*/
	}
}

