#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int agrc, char *agrv[])
{
	int i, j = 0;

	if (agrc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
			i = atoi(agrv[1]);
			while (i >= 25)
			{
				i -= 25;
				j++;
			}
			while (i >= 10)
			{
				i -= 10;
				j++;
			}
			while (i >= 5)
			{
				i -= 5;
				j++;
			}
			while (i >= 2)
			{
				i -= 2;
				j++;
			}
			if (i == 1)
				j++;
			else if (i < 0)
				printf("%d\n", 0);
			printf("%d\n", j);
			return (0);
}
