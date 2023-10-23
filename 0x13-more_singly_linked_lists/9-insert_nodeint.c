#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: Pointer to a pointer to a head node.
 *@idx: The index of the list where the new node should be added.
 *@n: element of the node.
 *
 * Return: The address of the newnode or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	if (idx > 0 && *head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		temp = *head;

		for (i = 1; i < idx; i++)
		{
			if (temp == NULL)
			{
				free(new_node);
				return (NULL);
			}
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
