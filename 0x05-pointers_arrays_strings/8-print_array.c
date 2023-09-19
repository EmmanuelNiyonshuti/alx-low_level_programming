#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an integer array, followed by a new line.
 *
 * @a: Pointer to an integer array.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	/* Loop through the array and print elements */
	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	/* Print a comma and a space unless it's the last element */
	if (i < n - 1)
	{
	printf(", ");
	}
	}

	/* Print a newline character to move to the next line */
	printf("\n");
}
