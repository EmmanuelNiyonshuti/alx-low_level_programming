#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point.
 *
 * Return: generated number.
*/


/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	q = n % 10;
	if (q > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, q);
	}
	else if (q < 6 && q != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, q);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, q);
	}
	return (0);
}
