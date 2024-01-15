#include "main.h"
/**
 * _memcpy - Copies @n bytes from memory area @src to memory area @dest.
 *
 * @dest: A pointer to the destination memory area where data will be copied.
 * @src: A pointer to the source memory area from which data will be copied.
 * @n: The number of bytes to be copied from @src to @dest.
 *
 * Return: A pointer to the destination memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_start = dest;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest_start);
}

