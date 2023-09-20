#include "main.h"

/**
 * cap_string - a function that changes all lowercase letters
 * of a string to uppercase.
 * @str: the string.
 * Return: the result of change.
 */
char *cap_string(char *str)
{
	int i, j;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == spe[j])
			{
				if (str[i + 1] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
