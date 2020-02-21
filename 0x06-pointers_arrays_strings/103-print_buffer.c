#include "holberton.h"
#include <stdio.h>

/**
 *print_buffer - void function
 *@b : char
 *@size: int
 *Return: void
 */
void print_buffer(char *b, int size)
{
int i;
if (size <= 0)
printf("\n");
else
{
for (i = 0; i < size; i++)
{
if (i % 2 == 0)
printf(" ");
if (b[i] >= 32 || b[i] <= 126)
printf("%.2x", b[i]);
else
printf(".");
}
}
printf("\n");
}
