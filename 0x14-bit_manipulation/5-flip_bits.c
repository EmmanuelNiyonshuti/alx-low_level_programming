#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to
 *	flip to get from one number to another.
 * @n: First unsigned lng int.
 * @m: Second unsigned long int.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result_xor = n ^ m;
	unsigned int count = 0;

	while (result_xor)
	{
		count += result_xor & 1;
		result_xor >>= 1;
	}
	return (count);
}
