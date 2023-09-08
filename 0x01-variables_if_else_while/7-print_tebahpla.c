#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char a[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
