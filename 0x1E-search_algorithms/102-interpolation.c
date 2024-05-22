#include "search_algos.h"
/**
 * interpolation_search - Performs an interpolation search on a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the value, -1 otherwise.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (value);
			return (-1);
		}
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

