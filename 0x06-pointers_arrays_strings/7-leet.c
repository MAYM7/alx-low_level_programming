#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: the string.
 * Return: the result of change.
 */
char *leet(char *str)
{
	int i, j;
	char code[10] = {'a', 'A', 'e', 'E', 'o',
	'O', 't', 'T', 'l', 'L'};
	char m[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == code[j])
			{
				str[i] = m[j];
			}
		}
	}
	return (str);
}
