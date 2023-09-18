#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * followed by a new line.
 *
 * @a: array of int.
 * @n: the num of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i > 0; i++)
	{
		_putchar(*a[i] + '0');
	}
	_putchar('\n');
}
