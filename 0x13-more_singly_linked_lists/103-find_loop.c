#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p = head;
	listint_t *q = head;

	while (p && q && q->next)
	{
		p = p->next;
		q = q->next->next;

		if (p == q)
		{
			p = head;
			break;
		}
	}

	if (!p || !q || !q->next)
		return (NULL);

	while (p != q)
	{
		p = p->next;
		q = q->next;
	}
	return (p);
}
