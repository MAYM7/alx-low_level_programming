#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed.
 */
void print_line(int n)
{
	int i, j;

	j = n + 1
	if (n > 0)
	{
		for (i = 0; i < j; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

