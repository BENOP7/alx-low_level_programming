#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

/**
 * _read - reads bytes from a given file
 * @fd: file descriptor of file to read from
 * @buf: memory buffer to copy read bytes to
 * Return: number of bytes read
 */
ssize_t _read(int fd, char *buf)
{
	ssize_t size = 0;

	size = read(fd, buf, 1024);
	if (size < 0)
		exit(98);
	return (size);
}

/**
 * close_files - close all the given files
 * @from: file
 * @to: file
 */
void close_files(int from, int to)
{
	int sc;

	sc = close(from);
	if (sc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	sc = close(to);
	if (sc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file
 * @ac: number of arguments
 * @av: argument list
 * Return: returns 0 on success otherwise returns status code depending on
 * failure type
 */
int main(int ac, char **av)
{
	char *file_from, *file_to, *buf;
	int fd_from, fd_to;
	ssize_t len;
	int i = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = av[1];
	file_to = av[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_APPEND, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	while (i < 3)
	{
		buf = malloc(1024 * sizeof(*buf));
		if (buf == NULL)
			return (98);
		len = _read(fd_from, buf);
		write(fd_to, buf, len);
		free(buf);
		i++;
	}
	close_files(fd_from, fd_to);
	return (0);
}
