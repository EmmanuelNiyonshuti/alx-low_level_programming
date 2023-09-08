#include <stdio.h>
/**
 * main - Entry Point
 * Description: Prints all possible combination of single digits.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

