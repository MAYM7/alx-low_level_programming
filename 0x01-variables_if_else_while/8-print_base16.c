#include <stdio.h>

/**
 * main - prints numbers of base 16.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char a[16] = "123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
