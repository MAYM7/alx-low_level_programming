#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j =0; j < 14; j++)
		{
			_putchar(j + '0');
		}
	}
	_putchar ('\n');
}
