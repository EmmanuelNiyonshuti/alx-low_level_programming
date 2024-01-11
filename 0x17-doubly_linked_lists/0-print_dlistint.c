#include "lists.h"
/**
 * print_dlistint - Prints all the elemnts of a dlistint_t list.
 * @h: Pointer to the first node.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
