#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - computes the sum of two integers.
 * @a: an integer a.
 * @b: an integer b.
 *
 *Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - computes the difference between two integers.
 * @a: an integer a.
 * @b: an integer b.
 *
 * Return: the difference between a nad b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - computes the product of two ntegers.
 *@a: an integer a.
 *@b: an integer b.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - computes the the result of the division between two int.
 *@a: an integer a.
 *@b: an integer b.
 *
 * Return: The result of the division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - computes the remainder of the dision of two int.
 *@a: an integer a.
 *@b: an integer b.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
