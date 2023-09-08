#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry Point.
* Return: Always 0 (Success).
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%dis positive\n", n);
	else if (n < 0)
	printf("%dis zero\n", n);
	else
	printf("%dis negative\n", n);
	return (0);
}
