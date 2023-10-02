#include <stdio.h>
#include <stdlib.h>

/**
 * mynameis - a program that prints its name, followed by a new line.
 * @argc: the length of the string of arguments entered.
 * @argv: the array of arguments entered.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	printf("%s", *argv[0]);
	return (0);
}
