#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		sum *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
}
