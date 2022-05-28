#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * append_text_to_file - adds a text to the end of a file content
 * @filename: name of the file
 * @text_content: text to be appended
 * Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	
	if(filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, _strlen(text_content));
	return (1);
}

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
