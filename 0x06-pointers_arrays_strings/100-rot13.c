#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: the string to encode.
 * Return: Result of change.
 */
char *rot13(char *str)
{
	int i, j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
		if (str[i] == alph[j])
		{
			str[i] = rot[j];
		}
		}
	}
	return (str);
}
