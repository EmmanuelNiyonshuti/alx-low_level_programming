#include "main.h"
#include <stdio.h>

/**
 * main - Test the leet function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Hello, Leet!";
	char *result;

	printf("Original string: %s\n", str);

	result = leet(str);

	printf("Leet-encoded string: %s\n", result);

	return (0);
}
