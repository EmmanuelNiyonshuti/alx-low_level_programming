#include "main.h"
/**
 * create_file - Creates a file.
 *@filename: name of the file to create.
 *@text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytesWrite;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT | S_IRUSR | S_IWUSR);
		if (fd == -1)
		{
			return (-1);
		}

	bytesWrite = write(fd, text_content, sizeof(char) + 1);
		if (bytesWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
		if (fd == -1)
		{
			return (-1);
		}
	}

	close(fd);
	return (1);
}
