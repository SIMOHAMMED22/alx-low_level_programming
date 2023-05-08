#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - creates a file with the given name and writes the given
 * text content to it.
 * @filename: the name of the file to create.
 * @text_content: a NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0, content_len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[content_len])
			content_len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		bytes_written = write(fd, text_content, content_len);

	close(fd);

	if (bytes_written == -1 || bytes_written != content_len)
		return (-1);
	return (1);
}
