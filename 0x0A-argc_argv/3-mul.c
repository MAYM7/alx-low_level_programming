#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: 0 when given two number, else returns 1. 
 **/
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 3)
	{
		while (i < argc)
		{
			sum = sum * atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
