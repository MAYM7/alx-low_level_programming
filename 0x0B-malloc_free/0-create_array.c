#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function thats create an array of chars
 * @size: number of elements
 * @c: size of one unit
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
