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

	/* Handle leading '+' or '-' signs */
	if (s[0] == '-' || s[0] == '+')
	{
	if (s[0] == '-')
	sign = -1;
	i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');
	i++;
	}

	return (result * sign);
}
