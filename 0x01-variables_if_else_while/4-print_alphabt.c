#include <stdio.h>

/**
 * main - prints alphabet in lowecase except q and e.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char a[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
