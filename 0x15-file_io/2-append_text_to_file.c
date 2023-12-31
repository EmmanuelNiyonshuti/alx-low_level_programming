#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int append_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}

		append_bytes = write(fd, text_content, strlen(text_content));
		if (append_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}

