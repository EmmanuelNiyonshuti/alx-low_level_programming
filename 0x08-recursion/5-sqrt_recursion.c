#include "main.h"
/**
* _sqrt_recursive - Helper function for recursive square root calculation.
* @n: The number for which to calculate the square root.
* @guess: The current guess for the square root.
*
* Return: The square root of n or -1 if n does not have a natural square root.
*/
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
	return (-1);
	}
	else
	{
	return (_sqrt_recursive(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root of n or -1 if n does not have a natural square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursive(n, 1));
	}
}
