#include "main.h"

/**
 * _atoi - a functuion that converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, l, f, p;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	p = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			p = s[i] - '0';
			if (d % 2)
				p = -p;
			n = n * 10 + p;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
