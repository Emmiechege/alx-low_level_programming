#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the list (head of list)
 * @index: position of the elements in the linked list(index of node)
 * Return: nth node of a listint_t linked list
 * otherwise return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;/*initializes counter to track current nodes position*/
	listint_t *current_node = head; /* initializes a pointer to traverse list */

	while (current_node != NULL)
	{
		if (count == index)
		{
			return (current_node);/*returns current node when desired index is reached*/
		}
		current_node = current_node->next; /*move to next node */
		count++; /*increment counter */
	}
	return (NULL); /*if desired index is not found,return NULL*/
}
