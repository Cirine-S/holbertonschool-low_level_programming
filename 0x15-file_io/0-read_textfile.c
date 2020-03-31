#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *read_textfile - function
 *@filename: char
 *@letters: size
 *Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *txt;
	ssize_t size;

	if (!filename)
		return (0);
	txt = malloc(sizeof(letters));
	if (!txt)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = read(fd, txt, letters);
	printf("%s\n", txt);
	printf("%d\n", (int)size);

return (size);
}
