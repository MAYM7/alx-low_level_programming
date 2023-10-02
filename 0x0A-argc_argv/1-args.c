#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: the number of arguments.
 * @argv: the array that contains a string of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
