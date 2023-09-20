#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: the string to encode.
 * Return: Result of change.
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = str[i] + 13;
		if (str[i] > 'z')
		{
			str[i] = str[i] - 25;
		}
	}
	return (str);
}
