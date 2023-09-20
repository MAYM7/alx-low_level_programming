#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the destination string.
 * @src: the source string.
 */
char *_strcat(char *dest, char *src)
{
	int l = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
