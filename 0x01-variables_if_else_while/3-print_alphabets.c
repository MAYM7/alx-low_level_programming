#include <stdio.h>

/**
 * main - prints alphabet in lowecase and uppercase.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
