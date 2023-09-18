#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid
 * passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int pass[100];
	int i, j, n;

	j = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		j += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - j) - '0' < 78)
		{
			n = 2772 - j - '0';
			j += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
