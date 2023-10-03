#include "main.h"
#include <stdlib.h>

/**
 * is_space - checks if a character is a space
 * @c: the character to check
 * Return: 1 if c is a space, 0 otherwise
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 * Return: the number of words in str
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (!is_space(str[i]))
		{
			count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
		else
		{
			i++;
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count;

	if (str == NULL || *str == '\0' || count_words(str) == 0)
		return (NULL);

	count = count_words(str);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
		while (is_space(str[j]))
			j++;

		len = 0;
		while (str[j + len] && !is_space(str[j + len]))
			len++;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[j + k];
		words[i][k] = '\0';

		j += len;
	}

	words[i] = NULL;
	return (words);
}
