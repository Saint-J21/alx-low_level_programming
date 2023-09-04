#include "main.h"

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: The text file to be read.
 * @letters: The number of letters to be read.
 * Return: The actual number of bytes read and printed.
 *         0 when the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	return (0);

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	char *buffer = malloc(sizeof(char) * letters);
    	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	ssize_t total_bytes_read = 0;
	ssize_t bytes_read;
	ssize_t bytes_written;

	while ((bytes_read = read(fd, buffer, letters)) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
		total_bytes_read += bytes_read;
	}

	free(buffer);
	close(fd);
	return (total_bytes_read);
}

