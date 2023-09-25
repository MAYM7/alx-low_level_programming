#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string serched.
 * @c: the char need to be located.
 * Return: the point of the first occurrence of the char.
 */
char *_strchr(char *s, char c)
{
	unsigned int i, j;
	char temp[50];

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			while (i != '\0')
			{
				j = 0;
				s[i] = temp[j];
				j++;
				i++;
			}
			break;
		}
	}
return (temp);
}
