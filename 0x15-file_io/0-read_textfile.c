#include <stdio.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * @filename: the name of the file to read.
 * @letters: the maximum number of letters to read and print.
 *
 * Return: actual number of letters
 *  read and printed, or 0 if there was an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
	{
		return (0);
	}

	FILE *fp = fopen(filename, "r");

	if (!fp)
	{
		return (0);
	}

	char *buffer = malloc(letters + 1);

	ssize_t bytes_read = fread(buffer, 1, letters, fp);

	buffer[bytes_read] = '\0';
	ssize_t bytes_written = fwrite(buffer, 1, bytes_read, stdout);

	fclose(fp);
	free(buffer);
	return (bytes_written == bytes_read ? bytes_read : 0);
}
