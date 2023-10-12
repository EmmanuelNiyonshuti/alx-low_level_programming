#include <stdio.h>
#include <stdlib.h>
/**
 *printOpcodes - Prints the opcodes of the main function
 * @numBytes: Number of opcodes to print
 *
 * Description: This function prints the opcodes of the main function.
 *It takes the number of opcodes to print as an argument.
 *
 */
void printOpcodes(int numBytes)
{
	int i;

	if (numBytes < 0)
	{
		fprintf(stderr, "Error\n");
		exit(2);
	}

	printf("Opcodes of main function:\n");

	void *mainAddr;

	asm("lea (%%rip), %0" : "=r"(mainAddr));

	for (i = 0; i < numBytes; ++i)
	{
		printf("%02x", *((unsigned char *)mainAddr + i));
		if (i < numBytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 *main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This program prints the opcodes of its own main function.
 * It takes the number of opcodes to print as a command-line argument.
 * If the number of arguments is incorrect, it prints an error message.
 *
 * Return: 0 on success, 1 on incorrect usage, 2 on negative number of opcodes
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	int numBytes = atoi(argv[1]);

	printOpcodes(numBytes);

	return (0);
}
