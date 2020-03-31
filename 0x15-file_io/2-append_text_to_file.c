#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * append_text_to_file - function
 * @filename: char
 * @text_content: char*
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nb, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (i = 0; text_content[i]; i++)
		;

	nb = write(fd, text_content, i);
	if (nb == -1)
		return (-1);

	close(fd);
	return (1);
}
