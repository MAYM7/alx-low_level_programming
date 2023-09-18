#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - a function that prints a string in rev.
 *
 * @s: pointer to the string to print reverced.
 */
void rev_string(char *s)
{
	int i, j;
	char w;

	j = strlen(s);

	for (i = 0; i < j / 2; i++)
	{
	w = s[i];
	s[i] = s[j - i - 1];
	s[j - i - 1] = w;
	}
}
