#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: Pointer to the key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;
	unsigned long index;

	/*Checking the validity of the input*/
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/*Getting the index in the hash tables array*/
	index = key_index((const unsigned char*)key, ht->size);

	/*Assigning the value stored at the calculated index in the hash tables' array to the pointer variable 'current'*/
	current = ht->array[index];

	/*Iterating through a linked list searching for a node with a matching key*/
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	/*Creating a new_node to allocate a memory for storing a new key-value pair in the hash table*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}


	new_node->value = strdup(value);
	if (new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/*Insert new node at the beginning of the linked list*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
