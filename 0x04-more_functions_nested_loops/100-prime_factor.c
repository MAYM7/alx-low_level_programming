#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	long int number;
	long int large;
	long int i;

	number = 612852475143;
	large = -1;

	while (number % 2 == 0)
	{
		large = 2;
		number = number / 2;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			large = i;
			number = number / i;
		}
	}
	if (number > 2)
			large = number;

	printf("%ld\n", large);

	return (0);
}
