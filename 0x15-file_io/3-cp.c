#include "main.h"

#define BUFFER_SIZE 1024
/**
 * main: Entry Point.
 * @argv: Argument vector.
 * @argc: Argument count.
 *
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int src_fd, dest_fd;
	ssize_t bytesRead, bytesWritten;
	int close_fd1, close_fd2;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	src_fd = open(file_from, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(2, "error: Can't read from %s\n", file_from);
		exit(98);
	}
	dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}


	while ((bytesRead = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(dest_fd, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(2, "error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytesRead == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	close_fd1 = close(src_fd);
	if (close_fd1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	close_fd2 = close(dest_fd);
	if (close_fd2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}
