#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first int.
 * @b: second int.
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
