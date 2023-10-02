#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: the number of arguments.
 * @argv: the array that contains a string of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
