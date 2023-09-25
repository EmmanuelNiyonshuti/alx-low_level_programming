#include "main.h"
#include <stddef.h>
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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
			s++;
	}
	return (NULL);
}
