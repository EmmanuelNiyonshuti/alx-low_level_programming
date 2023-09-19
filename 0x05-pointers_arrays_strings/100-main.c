#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is the main function where the _atoi function is
 *              tested by converting a string to an integer and printing
 *              the result.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "   -12345abc";
	int result = _atoi(str);

	printf("Result: %d\n", result);
	return (0);
}
