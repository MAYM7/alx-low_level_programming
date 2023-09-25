#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: string to change.
 * @b: constant byte.
 * @n: the num of char to change in string.
 * Return: the value of the changed string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
