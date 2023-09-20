#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: the destination string.
 * @src: the source string.
 * @n: num of elments to concatenate.
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
