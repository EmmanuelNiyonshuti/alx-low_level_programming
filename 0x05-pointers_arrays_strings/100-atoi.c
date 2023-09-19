#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
	sign *= -1;
	else if (s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');
	found_digit = 1;
	}
	else if (found_digit)
	break;  /* Stop if non-digit encountered after numbers */
	i++;
	}

	return (result * sign);
}
