#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Hello, World! This is a ROT13 test.";
	char *result;

	printf("Original string: %s\n", str);

	result = rot13(str);

	printf("Encoded string: %s\n", result);

	return (0);
}
