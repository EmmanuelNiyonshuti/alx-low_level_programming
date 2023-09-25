#include "main.h"
/**
 * _strchr - Locates the first occurrence of the character @c in the string @s.
 *
 * @s: A pointer to the string to search.
 * @c: The character to locate within the string @s.
 *
 * Return: A pointer to the first occurrence of @c in @s,
 * or NULL if @c is not found.
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
