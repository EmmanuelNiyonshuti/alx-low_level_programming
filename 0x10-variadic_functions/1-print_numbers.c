#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a newline.
 * @separator: The string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int values;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		values = va_arg(args, unsigned int);
		printf("%d", values);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
