#include "main.h"

/**
 * print_square - a function that draws a square in the terminal.
 * @size: is the number of times the character # should be printed.
 */
void print_square(int size)
{

	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{

				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

