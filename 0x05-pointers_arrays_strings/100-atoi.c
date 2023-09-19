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
	int digit = s[i] - '0';

  
	if (result > 214748364 || (result == 214748364 && digit > 7))
	{
	if (sign == 1)
	return 2147483647;
	else
	return -2147483648;
	}

	result = result * 10 + digit;
	found_digit = 1;
	}
	else if (found_digit)
	break;  /* Stop if non-digit encountered after digits */
	i++;
	}

	return result * sign;
}
