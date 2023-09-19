#include "main.h"
/**
 * rev_string - Reverses a string in-place.
 *
 * @s: Pointer to a null-terminated string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;

	int start = 0;

	int end;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
	length++;
	}
	end = length - 1;  /* Set the end index to the last character */
	/* Reverse the string in-place */
	while (start < end)
	{
	/* Swap characters at start and end indices */
	char temp = s[start];

	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
	}
}
