#include <stdio.h>
/**
* main - Entry Point.
* Return: Always 0 (Success).
*/
int main(void)
{
	char start, end;
	char ch;

	start = 'a';
	end = 'z';
	for (ch = start; ch <= end; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
