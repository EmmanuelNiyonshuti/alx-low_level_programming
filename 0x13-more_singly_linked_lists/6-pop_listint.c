#include "lists.h"
/**
 *pop_listint - Deletes the head node of a listint_t.
 *@head: Pointer to a pointer to a headnode.
 *
 * Return: The head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int popped_data = 0;

	if (head != NULL && *head != NULL)
	{
		popped_data = (*head)->n;

		new_head = (*head)->next;
		free(*head);

		*head = new_head;
	}

	return (popped_data);
}
