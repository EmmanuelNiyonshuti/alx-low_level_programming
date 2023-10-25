#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: Pointer to a pointer to a first node.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current->next;
		free(current);
		current = temp;
	}

	*h = NULL;

	return (size);
}
