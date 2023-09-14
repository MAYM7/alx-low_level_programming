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

	int d, j;

	d = 1;
	while (d <= n / 10)
	{
		d *= 10;
	}

	while (d > 0)
	{
		j = n / d;
		_putchar(j + '0');
		n %= d;
		d /= 10;
	}
}
