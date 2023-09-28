#include "main.h"
/**
 * _is_prime_recursive - Help to check n is prime recursively.
 * @n: The number to be checked for primality.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int _is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
	return (0);
	}
	else if (divisor == 1)
	{
	return (1);
	}
	else if (n % divisor == 0)
	{
	return (0);
	}
	else
	{
	return (_is_prime_recursive(n, divisor - 1));
	}
}
/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (_is_prime_recursive(n, n - 1));
}
