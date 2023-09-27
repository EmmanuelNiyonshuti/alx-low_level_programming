#include "main.h"
/**
* _puts_recursion - Prints a string using recursion
* @s: The string to be printed
*
* Description: This function prints a string one character at a time
* using recursion until it reaches the null terminator '\0'.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
