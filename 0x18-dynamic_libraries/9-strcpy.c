#include <stdio.h>
/**
 *_strcpy - function
 *@dest: char
 *@src: char
 *Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
