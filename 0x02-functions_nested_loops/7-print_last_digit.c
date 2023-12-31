#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer for which to print the last digit.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(long n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
