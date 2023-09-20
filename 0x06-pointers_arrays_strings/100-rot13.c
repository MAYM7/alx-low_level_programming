#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: the string to encode.
 * Return: Result of change.
 */
char *rot13(char *str)
{
	int i, j;
	char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z'};
	char rot[26] = {'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f',
	'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
		if (str[i] == alph[j])
		{
			str[i] = rot[j];
		}
		}
	}
	return (str);
}
