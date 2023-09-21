#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[1024] = "This is a test buffer for the print_buffer function.";
	int size = 49;  /* Adjust the size as needed */

	printf("Buffer:\n");
	print_buffer(buffer, size);

	return (0);
}
