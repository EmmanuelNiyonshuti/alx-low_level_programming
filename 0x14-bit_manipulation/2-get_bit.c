#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: an unsigned long integer from which we want to extract the bit.
 * @index: The position of the bit we want to retrieve.
 *	The Rightmost bit at index 0, he next bit at index 1, and so on.
 *
 * Return: The value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
