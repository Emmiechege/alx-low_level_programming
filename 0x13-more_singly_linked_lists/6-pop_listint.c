#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: pointer to the address of the head of the linked list
 * Return: head note's data (n),if liinked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_ptr; /*creates temporary pointer to store old head note */
	int data_n; /*variable to hold the data of the old head note*/

	if (*head == NULL)
	{
		return (0); /*if list is empty return 0*/
	}

	temp_ptr = *head; /*stores the current head node in te temp pointer */
	data_n = (*head)->n; /*get the data of the current head node */

	*head = (*head)->next; /*update the head pointer to point to next node */

	free(temp_ptr); /*free memory occupied by old head node */

	return (data_n); /*return data of old head node*/
}
