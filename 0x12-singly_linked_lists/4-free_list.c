#include "lists.h"
/**
 * free_list - frees a list_t list.
 *@head: pointer to the first node.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list-t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;

		free(curent->str);

		free(current);

		current = next;
	}
}
