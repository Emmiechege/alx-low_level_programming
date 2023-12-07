#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Double pointer to the head node
 * @n: Double pointer to the head node
 * @idx: index of the list where the new node should be added, idx = 0
 * @n: data to put in the new node
 * Return: the address of the  new node at index idx, NULLIFY failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *freshnode;
	dlistint_t *temp_holder = *h;
	unsigned int v = 0; /*counter*/

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp_holder && v < idx - 1)
	{
		temp_holder = temp_holder->next;
		v++;
	}
	if (!temp_holder)
		return (NULL);
	if (!temp_holder->next) /*insert nod at the end of the list*/
		return (add_dnodeint_end(h, n));
	freshnode = malloc(sizeof(dlistint_t));
	if (freshnode == NULL)
		return (NULL);
	freshnode->n = n;
	freshnode->next = temp_holder->next;
	freshnode->prev = temp_holder;
	temp_holder->next->prev = freshnode;
	temp_holder->next = freshnode;

	return (freshnode);
}
