#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, temp;
	int count = 2;

	printf("%ld, %ld", a, b);

	while (count < 50)
	{
		temp = a + b;
		printf(", %ld", temp);

		a = b;
		b = temp;
		count++;
	}
	printf("\n");

	return (0);
}
