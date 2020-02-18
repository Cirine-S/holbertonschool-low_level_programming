#include <stdio.h>
/**
 *_strcpy - function
 *@dest: char
 *@src: char
 */
char *_strcpy(char *dest, char *src)
{
int i;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
