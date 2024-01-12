#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t.
 * @head: Points toa pointer that points to the first node.
 * @index: the index of the node that should be deleted.
 *
 * Return:1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int node = 0;

	if (*head == NULL && index == 0)
		return (-1);
	while (temp != NULL && node < index)
	{
		temp = temp->next;
		node++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	else
		*head = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
