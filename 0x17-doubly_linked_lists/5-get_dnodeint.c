#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the first node.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node of a list or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int num_nodes = 0;

	while (temp != NULL)
	{
		if (num_nodes == index)
			return (temp);

		temp = temp->next;
		num_nodes++;
	}
	return (NULL);
}
