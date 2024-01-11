#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 *@head: Pointer to a the first node.
 *
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
