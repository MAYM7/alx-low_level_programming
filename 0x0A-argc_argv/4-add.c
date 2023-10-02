#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: 0 when given two number, else returns 1.
 **/
int main(int argc, char *argv[])
{
	int sum = 0, i;
	char *find_letter;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			find_letter = argv[i];
			while (*find_letter != 0)
			{
				if (*find_letter < 47 || *find_letter > 57)
				{
					printf("%s\n", "Error");
					return (1);
				}
				find_letter++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
}
