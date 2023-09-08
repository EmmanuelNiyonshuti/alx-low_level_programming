#include <stdio.h>
/**
 * main - Entry Point.
 * Description:Prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int value1, value2;

	for (value1 = 0; value1 <= 98; value1++)
	{
		for (value2 = value1 +1; value2 <= 99; value2++)
		{
			putchar((value1 / 10) + '0');
			putchar((value1 % 10) + '0');
			putchar(' ');
			putchar((value2 / 10) + '0');
			putchar((value2 % 10) + '0');

			if (value1 == 98 && value2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
