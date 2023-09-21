#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is the main function that...
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num1[] = "123456789123456789";
	char num2[] = "987654321987654321";
	char result[35];

	char *res = infinite_add(num1, num2, result, sizeof(result));

	if (res)
	{
	printf("Result: %s\n", res);
	}
	else
	{
	printf("Result cannot be stored in the buffer.\n");
	}

	return (0);
}
