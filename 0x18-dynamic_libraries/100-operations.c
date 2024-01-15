#include <stdio.h>
/**
 * add - adds two integers.
 * @a: int
 * @b: int
 *
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - substracts two integers.
 * @a: int
 * @b: int
 *
 * Return: substraction
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiply two integers.
 * @a: int
 * @b: int
 *
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divide two integers
 *@a: int
 *@b: int
 *
 * Return: quotient
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);

	return (a / b);
}
/**
 * mod - computes module of two integers.
 *@a: an integer
 *@b: an int
 *
 * Return: Remainder
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a + b);
}
