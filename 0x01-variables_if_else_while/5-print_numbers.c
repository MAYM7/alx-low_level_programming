#include <stdio.h>

/**
 * main - prints numbers from 0 to 9.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int a[10] = [0,1,2,3,4,5,6,7,8,9];
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
