#include "main.h"

/**
 * _strncpy - a function that copies a strings.
 * @dest: the destination string.
 * @src: the source string.
 * @n: num of elments to copy.
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
