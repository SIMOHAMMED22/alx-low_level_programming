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
	FILE *fp;
	char *buffer;
	ssize_t bytes_read = 0, bytes_written = 0;

	if (!filename)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (!fp)
	{
		return (0);
	}

	buffer = malloc(letters + 1);
	if (!buffer)
	{
		fclose(fp);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, fp);
	if (bytes_read == -1)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	buffer[bytes_read] = '\0';
	bytes_read++;
	bytes_written = fwrite(buffer, 1, bytes_read, stdout);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	free(buffer);
	fclose(fp);
	return (bytes_written);
}
