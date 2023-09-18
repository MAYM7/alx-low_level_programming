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
	int i, j, l;

	j = strlen(str);

	if (j % 2 == 0)
	{
		l = j / 2;

		for (i = l; i < j; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		l = j - 1;
		l /= 2;

		for (i = l + 1; i < j; i++)
	{
			_putchar(str[i]);
	}
	}
	_putchar('\n');
}
