#include "lists.h"
/**
 * get_nodeint_at_index - searches the nth node of a listint_t linked list.
 * @head: pointer to the first node.
 * @index: index of the node, starting at 0.
 *
 * Return: The nth node of a listint_t linked list,
 *	NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode = head;
	unsigned int i = 0;

	while (head == NULL)
	{
		return (NULL);
	}
	while (currentNode != NULL && i < index)
	{
		currentNode = currentNode->next;
		i++;
	}
	if (i == index && currentNode != NULL)

		return (currentNode);

	else
		return (NULL);
}
