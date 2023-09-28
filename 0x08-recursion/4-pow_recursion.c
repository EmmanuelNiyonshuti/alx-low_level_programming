#include "main.h"
/**
 * _pow_recursion - Computes the value of x^y recursively.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else if (y > 0)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	else
	{
	return (1.0 / (x * _pow_recursion(x, y - 1)));
	}
}
