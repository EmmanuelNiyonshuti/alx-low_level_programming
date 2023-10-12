#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a newline.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *current_string;
	va_list strArgs;

	va_start(strArgs, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(strArgs, char *);
		if (current_string != NULL)
		{
			printf("%s", current_string);
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(strArgs);
}

