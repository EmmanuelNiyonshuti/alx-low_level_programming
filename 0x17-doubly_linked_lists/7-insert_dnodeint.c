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

	new = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
		*h = new_node;
	else
	{
		while (current != NULL && current->next != NULL)
		{
			if (nodes_num == idx)
			{
				current->next->prev = new_node;
				new_node->next = current->next;
				new_node->prev = current;
				current->next = new_node;

				return (new_node);
			}
			current = current->next;
			nodes_num++;
		}
	}
	return (new_node);
}
