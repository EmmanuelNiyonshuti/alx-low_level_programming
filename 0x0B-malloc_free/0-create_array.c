#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: character to initialize the array with.
 *
 * Return: NULL if size is 0, otherwise a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *charArray = (char *)malloc(size * sizeof(char));

	if (size == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		charArray[i] = c;
	}
	return (charArray);
}
