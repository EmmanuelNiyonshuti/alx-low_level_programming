#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head node.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
