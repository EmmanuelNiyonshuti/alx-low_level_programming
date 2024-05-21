#include "search_algos.h"

/**
 * jump_search - Performs a jump search on a sorted array of integers.
 * @array: Pointer to the first element in an array.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the value, -1 otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, k, b_size, j;

	if (!array)
		return (-1);

	b_size = sqrt(size);
	i = 0;
	k = b_size;

	while (k < size && array[k - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", k - 1, array[k - 1]);
		i = k;
		k += b_size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, k);
	for (j = i; j < size && j < k; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
