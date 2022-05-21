#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads text stored in a file
 * filename: name of file to be read
 * letters: number of letters to read and print
 * Return: number of letters that were read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size = 0;
	char *buf = NULL;

	buf = malloc(letters * sizeof(*buf));
	if (buf == NULL)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	size = read(fd, buf, letters);
	if (size < 0)
		return (0);

	write(STDIN_FILENO, buf, size);
	free(buf);
	close(fd);
	return (size);
}
