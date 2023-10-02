#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j;
	size_t len_s1 = 0;
	size_t len_s2 = 0;
	char *concatenated;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[len_s1] != '\0')
	{
	len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
	len_s2++;
	}
	concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
	concatenated[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++, i++)
	{
	concatenated[i] = s2[j];
	}
	concatenated[i] = '\0';
	return (concatenated);
}
