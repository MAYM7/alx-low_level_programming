#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int to extract the bit from.
 * @index: The index of the bit to retrieve
 * (0 being the least significant bit).
 *
 * Return: The value of the bit at the specified index
 * (0 or 1) or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	unsigned long int mask = 0;

	mask = 1UL << index;
	int bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
