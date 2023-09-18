#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - a function that prints half a string.
 *
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
	int i, j;

	j = strlen(str);

	for (j % 2 = 0)
	{
		for (i = 0; i >= j / 2; i++)
		{
			_putchar(str[i]);
		}
	}
	for (j % 2 != 0)
	{
		for (i = 0; i >= (j - 1) / 2; i++)
	{
			_putchar(str[i]);
	}
	}
	_putchar('\n');
}
