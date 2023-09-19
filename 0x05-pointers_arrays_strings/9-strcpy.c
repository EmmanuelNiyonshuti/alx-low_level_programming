#include "main.h"
/**
 * _strcpy - Copies a string from src to dest (including '\0' character).
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	/* Copy characters from src to dest, including '\0' */
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	/* Append the null terminator */
	*dest = '\0';

	return (original_dest);
}
