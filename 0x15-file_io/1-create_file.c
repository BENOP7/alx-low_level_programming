#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: string
 * Return: size of string
 */
int _strlen(char *str)
{
	int l = 0;

	while (str[l])
		l++;
	return (l);
}
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to be written to the created
 * Return: 1 0n success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	return (1);

}
