#include "search_algos.h"

/**
*linear_search - Searches for a value in an array.
*@array: Pointer to the first element in an array.
*@size: Size of the array.
*@value: The value to look for in a array.
*
*Return: the index of the value in the array , -1 otherwise.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
