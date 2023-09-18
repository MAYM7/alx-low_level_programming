#include "main.h"

/**
 * puts2 - a function that prints every other char in a string.
 *
 * @str: pointer to the string to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		if (str[i + 1] != '\0'')
		{
			i++;
		}
	}
	_putchar('\n');
}
