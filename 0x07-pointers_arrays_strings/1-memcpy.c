#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination string to change.
 * @src: source string to copy.
 * @n: the num of bytes to change in string.
 * Return: the value of the changed string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
