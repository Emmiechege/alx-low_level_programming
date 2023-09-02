#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the linked list
 * @idx: is te index of the list where the new node should be added
 * index starts at zero
 * @n: data of the new node
 * Return: a new updated linked list if its not possible to add
 * the new node at index idx, dont add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node; /* declares a pointer for new node */
	listint_t *current_node = *head; /*pointer forcurrent node is set to head*/
	listint_t *prev_node = NULL; /*pointer for previous node is set to NULL*/
	unsigned int count = 0;/*initializes count var,keeps track of node pstn*/

	new_node = malloc(sizeof(listint_t));/*allocate mem for new node pstn*/
	if (head == NULL)/*if head ptr is NULL,return NULL*/
		return (NULL);

	new_node = malloc(sizeof(listint_t));/*allocate memory for the new node*/
	if (new_node == NULL)
		return (NULL);/*check if mem allocation failed,if so return NULL*/

	new_node->n = n;/*assign value n to the data field of the new node */
	new_node->next = NULL;/*set next ptr of new node to NULL*/

	if (idx == 0)
	{
		new_node->next = *head;/*set the new node's next pointer to current head*/
		*head = new_node;/*update head pointerto point to new node*/
		return (new_node);/*return address of new node*/
	}
	while (current_node != NULL && count < idx)
	{
		prev_node = current_node;/*move previous node ptr to current node */
		current_node = current_node->next;/*move current node ptr to next node*/
		count++;/*increment count to track node position*/
	}
	if (count == idx)
	{
		prev_node->next = new_node;/*connect the previous node to new node*/
		new_node->next = current_node;/*connect the new node to the current node*/
		return (new_node);/*returns the address of the new node */
	}
	else
	{
		free(new_node);/*if desired index is out of ranfe,free new node*/
		return (NULL);/*return NULL to indicate failure */
	}
}
