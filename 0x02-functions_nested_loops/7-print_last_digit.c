#include "main.h"

/**
 * a function that prints the last digit of a number.
 * @n: the source integer.
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;

	_putchar(d + '0');
	return (d);
}
