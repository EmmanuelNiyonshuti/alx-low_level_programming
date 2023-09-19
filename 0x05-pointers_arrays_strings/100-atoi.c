#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 *
 * @s: Pointer to a null-terminated string.
 *
 * Return: The integer value represented by the string.
 *         If there are no numbers in the string, return 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
	i++;
	}
	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');
	i++;
	}

	return (result * sign);
}
