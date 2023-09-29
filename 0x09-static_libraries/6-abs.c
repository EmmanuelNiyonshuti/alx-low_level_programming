#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer for which to compute the absolute value.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
