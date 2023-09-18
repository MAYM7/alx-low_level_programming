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

	j = strlen(str) % 2;

	if (j == 0)
	{
		for (i = 0; i >= strlen(str) / 2; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0; i >= (strlen(str) - 1) / 2; i++)
	{
			_putchar(str[i]);
	}
	}
	_putchar('\n');
}
