#include "lists.h"
#include <stdio.h>
/**
 * list_len - gives the number of elements in a linked list_t list.
 * @h: pointer to the list_t.
 *
 * Return: The number of elements in list_t.
 */
size_t list_len(const list_t *h)
{
	size_t elementCount = 0;

	while (h != NULL)
	{

		elementCount++;
		h = h->next;
	}

	return (elementCount);
}
