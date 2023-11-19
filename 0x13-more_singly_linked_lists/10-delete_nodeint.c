#include "lists.h"

/**
*delete_nodeint_at_index - Delete the node at a given index in a list.
*@head: Pointer to a pointer to the head node.
*@index: Index of the node to be deleted.
*
*Return: 1 if successful, -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	listint_t *nth_node = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	prev = *head;
	for (i = 1; i < index; i++)
	{

		prev = prev->next;
	}

	if (prev == NULL || prev->next == NULL)
		return (-1);

	nth_node = prev->next;
	prev->next = nth_node->next;
	free(nth_node);

	return (1);
}


