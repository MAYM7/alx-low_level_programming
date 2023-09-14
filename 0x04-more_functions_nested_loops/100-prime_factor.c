#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	long int n;
	long int l;
	long int i;

	n = 612852475143;
	l = -1;

	while (n % 2 == 0)
	{
		l = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			l = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		l = n;
		printf("%ld\n", l);
	}
	return (0);
}
