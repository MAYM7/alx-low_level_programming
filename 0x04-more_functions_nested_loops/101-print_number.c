#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: integer to be printed
 */
void print_number(int n)
{
	int d;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10)
	}

	_putchar((n % 10) + '0');
}
