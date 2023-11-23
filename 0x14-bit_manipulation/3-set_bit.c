#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index.
 * @n: pointer to a number I want to set the value of.
 * @index: The index, starting from 0 of the bit I want to set.
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
		*n = *n | (1 << index);
	return (1);
}
