#include "main.h"
#define buffer 1024
/**
 * main: Entry Point.
 * @argv: Argument vector.
 * @argc: Argument count.
 *
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc < 0)
	{
		exit(97);
		perror("Usage: cp file_from file_to\n");
	}
	fd = open(file_to, O_RDONLY | O_WRONLY | 0_TRUNC | S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
	{
