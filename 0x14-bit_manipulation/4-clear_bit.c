#include "main.h"
/**
*clear_bit - Set the valuse of a bit to 0 at a given index.
*@n: A pointer to the number to modify.
*@index: The index of the bit to clear (starting from 0).
*
*Return: 1 if it worked, or -1 if an error occured.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~mask;

	return (1);
}