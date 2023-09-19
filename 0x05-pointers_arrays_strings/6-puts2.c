#include "main.h"
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str: Pointer to a null-terminated string to be printed.
*/
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string */
	while (str[i] != '\0')
	{
	/* Print the character at the current index */
	_putchar(str[i]);

	/* Move to the next character, which is two positions ahead */
	i += 2;
	}

	/* Print a newline character to move to the next line */
	_putchar('\n');
}
