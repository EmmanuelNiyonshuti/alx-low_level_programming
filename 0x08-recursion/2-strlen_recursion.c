#include "main.h"
/**
 * _strlen_recursion - computes the length of the string recursively.
 * @s: the string to calculate the length of.
 *
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
