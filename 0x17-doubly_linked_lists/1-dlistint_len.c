#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the first node in a list.
 *
 * Return: The number of elements in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements_num = 0;

	while (h != NULL)
	{
		h = h->next;
		elements_num++;
	}
	return (elements_num);
}
