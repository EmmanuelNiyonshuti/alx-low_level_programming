#include "main.h"
/**
 * wildcmp_recursive - Recursively compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s1 != '\0')
		{
			if (wildcmp_recursive(s1 + 1, s2))
			{
				return (1);
			}
		}
		return (wildcmp_recursive(s1, s2 + 1));
	}
	return (0);
}
/**
 * wildcmp - Compare two strings considering special '*' character.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}
