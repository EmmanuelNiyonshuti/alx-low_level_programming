#include "lists.h"
/**
 * reverse_listint - Reverse a listint_t linked list.
 * @head: Pointer to a pointer to the first node.
 *
 * Return: A pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;/*Keeping reference to the next node*/
		(*head)->next = prev;/*Setting the head node to NULL*/
		prev = *head;/*keeping reference to the previous node*/
		*head = next_node;/*moving head pointer to point to the next node*/
	}
	*head = prev;/*updating the head pointer to point to last node of the list*/

	return (prev);
}
