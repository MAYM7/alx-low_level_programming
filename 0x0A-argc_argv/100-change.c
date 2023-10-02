#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: num of arguments.
 * @argv: string og arguments.
 * Return: 1 if num of arguments not exatly 1, else 0.
 */

int main(int agrc, char *agrv[])
{
	int i, j = 0;

	if (agrc < 2)
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
			printf("%d\n", j);
			return (0);
}
