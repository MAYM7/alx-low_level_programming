#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	int d;

	d = 1;
	while (d < n / 10)
	{
		d = d * 10;
	}

	while (d > 0)
	{
		int j;

		j = n / d;
		_putchar(j + '0');
		n = n % d;
		d = d / 10;
	}
}
