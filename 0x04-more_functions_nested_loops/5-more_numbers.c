#include "main.h"

/**
* more_numbers - Prints numbers from 0 to 14.
* each repeated 10 times, followed by a new line
*/
void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10; count++)
	{
	for (num = 0; num <= 14; num++)
	{
	if (num >= 10)
	{
	_putchar(num / 10 + '0');
	}
	_putchar(num % 10 + '0');
	}
	_putchar('\n');
	}
}
