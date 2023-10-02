#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string or NULL if str is NULL or if
 *         memory allocation fails.
 */
char *_strdup(char *str)
{
	size_t i;
	size_t len = 0;
	char *duplicate;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[len] != '\0')
	{
	len++;
	}

	duplicate = (char *)malloc((len + 1) * sizeof(char));
	
	if (duplicate == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	{
	duplicate[i] = str[i];
	}

	duplicate[len] = '\0';

	return (duplicate);
}
