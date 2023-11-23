#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the bit to which value I want to set 0.
 * @index: the index, Starting from 0 of the bit I want to set.
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
		*n = *n & ~(1 << index);
	return (1);
}
