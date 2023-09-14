#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	if  (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
			if (j < i)
			{
				_putchar(' ');
			}
			else if (j == i)
			{
				_putchar('\\');
			}
		_putchar('\n');
			}
	}
	else
	{
		_putchar('\n');
	}
}
