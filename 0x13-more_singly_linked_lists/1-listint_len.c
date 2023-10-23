#include "lists.h"
/**
 * listint_len - counts the number of elements in a linked listint_t list.
 * @h: pointer to the head node.
 *
 * Return: The number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int element_num = 0;

	while (h != NULL)
	{
		h = h->next;
		element_num++;
	}
	return (element_num);
}
