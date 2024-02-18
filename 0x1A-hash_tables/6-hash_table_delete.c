#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i =0;
	hash_node_t *current;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	/*Deallocates memory for each node in each linked list*/
	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	/*Deallocates memory for the array itself*/
	free(ht->array);

	/*Deallocates memory for the hash table structure*/
	free(ht);
}
