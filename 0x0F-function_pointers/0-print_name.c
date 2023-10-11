#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name as is
 * @name: name of the person
 * @f: is pointer
 * Return: Nothing.
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
