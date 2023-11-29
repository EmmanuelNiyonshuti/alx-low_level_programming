#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: Pointer to the text file.
 * @letters: The actual number of letters it could read and print.
 *
 * Return: the actual number of letters it could read and print.
 *	0 if the file can not be opened or read.
 *	if filename is NULL.
 *	if write fails or does not write the expected amount of bytes.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead, bytesWritten, TotalBytesWritten = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytesRead = read(fd, buffer, letters);
	while (bytesRead > 0)
	{
		bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		TotalBytesWritten += bytesRead;
		bytesRead = read(fd, buffer, letters);
	}
	buffer[bytesRead] = '\0';
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (TotalBytesWritten);
}
