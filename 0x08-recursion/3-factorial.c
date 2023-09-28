#include "main.h"
/**
 * factorial - computes the factorial of a number recursively.
 * @n: number to calculate a factorial of.
 *
 * Return: -1 if n is lower than 0 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
