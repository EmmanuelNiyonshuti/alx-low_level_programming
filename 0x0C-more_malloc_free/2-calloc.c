#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, initializing it with zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Description: Allocates memory for an array of @nmemb elements, each of
 * @size bytes. The allocated memory is initialized to zero.
 *
 * Return: If allocation is successful, returns a pointer to the allocated
 *         memory. If nmemb or size is zero, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	size_t total_len = nmemb * size;
	size_t i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(total_len);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_len; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
