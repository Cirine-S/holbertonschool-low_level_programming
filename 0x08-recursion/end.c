#include "holberton.h"
/**
 *_endofstring - function
 *@s: char
 */
void _endofstring (char *s)
{
if (*s != '\0')
_endofstring(++s);
else
return;
}
