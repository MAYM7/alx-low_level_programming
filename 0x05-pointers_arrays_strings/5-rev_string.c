#include "main.h"

/**
 * rev_string - a function that prints a string in rev.
 *
 * @s: pointer to the string to print reverced.
 */
void rev_string(char *s)
{
	int i, j;
	char w[50];

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		w = s[i];
		i--;
	}
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (w[i] != '\0')
	{
		for (w[i] != ' ')
		{
			i--;
		}
		j = i - 1;
		while (w[i] != '\0' || w[i] != ' ')
		{
		_putchar(w[i]);
		i++;
		}
		i = j;
	}
	_putchar('\n');
}
