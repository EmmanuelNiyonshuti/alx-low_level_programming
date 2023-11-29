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
	ssize_t bytesRead, bytesPrint;

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
	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';

	bytesPrint = write(1, buffer, letters);
	if (bytesPrint == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);

	return (bytesRead);
}
