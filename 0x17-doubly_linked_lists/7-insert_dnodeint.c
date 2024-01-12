#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: Points to a pointer that points to a header.
 *@idx:The index of the list where the new node should be added
 *@n: an integer data
 *Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int nodes_num = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	/*Set data for the new node*/
	new_node->n = n;

	/*Check if the list is empty and the index is 0*/
	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	/*Traverse the list to find the insertion point*/
	while (current != NULL && nodes_num < idx)
	{
		current = current->next;
		nodes_num++;
	}
	/*Check if the index is out of bounds*/
	if (nodes_num < idx)
	{
		free(new_node);
		return (NULL);
	}
	/* Update pointers to insert the new node at the specified index*/
	if (current->prev != NULL)
		current->prev->next = new_node;
	else
		*h = new_node;
	/*Complete the linkage of the new node*/
	new_node->prev = current->prev;
	new_node->next = current;
	current->prev = new_node;

	/*Return the address of the new node*/
	return (new_node);
}

