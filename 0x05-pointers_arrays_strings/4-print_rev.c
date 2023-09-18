#include "main.h"

/**
 * print_rev - a function that prints a string in rev.
 *
 * @s: pointer to the string to print reverced.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	for (i = i; str[i] != '\0'; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
