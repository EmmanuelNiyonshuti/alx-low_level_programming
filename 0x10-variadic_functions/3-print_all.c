#include <stdio.h>
#include <stdarg.h>

void print_char(va_list argList);
void print_int(va_list argList);
void print_float(va_list argList);
void print_str(va_list argList);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a character
 * @argList: va_list containing the variable arguments
 */
void print_char(va_list argList)
{
	char ch = va_arg(argList, int);

	printf("%c", ch);
}

/**
 * print_int - Prints an integer
 * @argList: va_list containing the variable arguments
 */
void print_int(va_list argList)
{
	int num = va_arg(argList, int);

	printf("%d", num);
}

/**
 * print_float - Prints a float
 * @argList: va_list containing the variable arguments
 */
void print_float(va_list argList)
{
	double f = va_arg(argList, double);

	printf("%f", f);
}

/**
 * print_str - Prints a string
 * @argList: va_list containing the variable arguments
 */
void print_str(va_list argList)
{
	char *str = va_arg(argList, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything based on a format string
 * @format: A string containing format specifiers for different types
 *          c: char, i: integer, f: float, s: char *
 *          Any other character is ignored
 * @...: Variable arguments corresponding to the format string
 */
void print_all(const char * const format, ...)
{
	va_list argList;

	const char *currentFormat = format;

	va_start(argList, format);

	while (*currentFormat != '\0')
	{
		if (*currentFormat == 'c')
			print_char(argList);
		else if (*currentFormat == 'i')
			print_int(argList);
		else if (*currentFormat == 'f')
			print_float(argList);
		else if (*currentFormat == 's')
			print_str(argList);

		currentFormat++;

	if (*currentFormat != '\0' && (*currentFormat == 'c' || *currentFormat == 'i' || *currentFormat == 'f' || *currentFormat == 's'))

	printf(", ");
	}

	printf("\n");

	va_end(argList);
}
