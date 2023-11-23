#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit_set = 0;


	int num_bits = sizeof(n) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) != 0)
		{
			bit_set = 1;
			_putchar('1');
	}
		else if (bit_set)
		{
			_putchar('0');
		}
	}
}
