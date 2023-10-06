#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: Minimum value in the range.
 * @max: Maximum value in the range.
 *
 * Return: If successful, returns a pointer to the newly created array.
 *         If min is greater than max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *new_arr;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	new_arr = malloc(size * sizeof(int));

	if (new_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_arr[i] = min + i;
	}
	return (new_arr);
}
