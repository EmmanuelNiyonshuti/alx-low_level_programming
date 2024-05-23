#include <stdio.h>
#include "search_algos.h"

/**
*print_arr - Helper function to print
*    current sub array we are searching a value in.
*@array: Pointer to the first element in an array.
*@left: first index in an array segment.
*@right: last index in an array segment.
*
*Return: Nothing.
*/
void print_arr(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);

		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * bin_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @left: The starting index of the subarray to search in.
 * @right: The ending index of the subarray to search in.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_arr(array, left, right);

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      exponential search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t bound = 1;

	if (!array)
		return (-1);

	/* Find the range for binary search */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* Call binary search for the found range */
	left = bound / 2;
	right = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return (bin_search(array, left, right, value));
}
