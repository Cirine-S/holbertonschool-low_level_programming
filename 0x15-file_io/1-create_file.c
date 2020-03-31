#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - function
 * @filename : char
 * @text_content: char
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nb, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	nb = write(fd, text_content, i);
	if (nb == -1)
		return (-1);

	close(fd);
	return (1);

}
