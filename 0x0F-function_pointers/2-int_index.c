#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *@array: array of integers.
 *@size: size of the array.
 *@cmp: function pointer to be used to compare values.
*
*Return: The index of the first element for which cmp does not return 0.
*	0 if no element matches.
*	-1 if size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{

			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}


