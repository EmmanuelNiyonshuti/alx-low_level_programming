#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string.
 *
 * @s:  pointer to the string.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c in s,
 * or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (NULL);
}
