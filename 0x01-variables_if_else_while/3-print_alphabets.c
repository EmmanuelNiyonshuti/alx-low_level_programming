#include <stdio.h>
/**
* main - Entry Point.
* Return: Always 0 (Success).
*/
int main(void)
{
	char currentChar = 'a';
	int count = 0;

	while (count < 26)
	{
		putchar(currentChar);
		currentChar++;
		count++;
	}
	currentChar = 'A';
	while (count < 52)
	{
		putchar(currentChar);
		currentChar++;
		count++;
	}
	putchar('\n');
	return (0);
}
