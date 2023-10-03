#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array of strings (arguments).
 *
 * Return: A pointer to a new string, or NULL if it fails.
 * Each argument is followed by a newline in the new string.
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int total_len = 0;
	int av_len = 0;
	int current_p = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][av_len] != '\0')
		{
			av_len++;
		}
		total_len += av_len + 1;
	}
	result = (char *)malloc(total_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[current_p] = av[i][j];
			current_p++;
			j++;
		}
		result[current_p] = '\n';
		current_p++;
	}
	result[current_p] = '\0';
	return (result);
}
