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

	if (j % 2 == 0)
	{
		j /= 2;

		for (i = j; i <= strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		j--;
		j /= 2;

		for (i = j; i <= strlen(str); i++)
	{
			_putchar(str[i]);
	}
	}
	_putchar('\n');
}
