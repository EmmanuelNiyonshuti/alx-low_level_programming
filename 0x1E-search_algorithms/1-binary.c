#include "search_algos.h"

/**
*print_arr - Helper function to print current array I am searching a value in.
*@array: Pointer to the first element in an array.
*@l: first index in an array segment.
*@r: last index in an array segment.
*
*Return: Nothing.
*/
void print_arr(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");

	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);

		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
*binary_search - searches for a value in a sorted array of integers
*                using the Binary search algorithm.
*@array: Pointer to the first element in an array.
*@size: Size if the array.
*@value: Value to search for.
*
*Return: The index where value is located or -1 otherwise.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	l = 0;
	r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		print_arr(array, l, r);
		m = (l + r) / 2;
		if (array[m] > value)
		{
			r = m - 1;
		}
		else if (array[m] < value)
		{
			l = m + 1;
		}
		else
			return (m);
	}
	return (-1);
}
