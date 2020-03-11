#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - function
 *@name: char
 *@f: func
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
f(name);
}
