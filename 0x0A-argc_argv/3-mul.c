#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiply two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Result of the multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}
