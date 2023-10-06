#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum num.
 * @max: maximum num.
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, len;
	int *p;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
