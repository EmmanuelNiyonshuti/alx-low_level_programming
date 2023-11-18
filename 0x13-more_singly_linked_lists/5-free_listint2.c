#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: Pointer to a pointer to a head node.
 *
 * Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	head = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
