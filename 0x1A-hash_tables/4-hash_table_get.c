#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table.
 * @key: The key.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	/*Calculating the hash value for the key*/
	index = key_index((const unsigned char *)key, ht->size);

	/*Traverse the linked list at the calculated index*/
	current = ht->array[index];
	while (current != NULL)
	{
		/*If key is found, return the associated value*/
		if (strcmp(current->key, key) == 0)
			return (current->value);
		/*Move to the next node in the linked list*/
		current = current->next;
	}
	/*Key not found*/
	return (NULL);
}
