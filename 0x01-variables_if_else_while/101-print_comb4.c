#include <stdio.h>
/**
 * main - prints all possible combinations of three digits.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int j;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (l = j + 1; l < 10; l++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(l + '0');
				if (l <= 9 && j + i + l != 24)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
		putchar('\n');
		return (0);
}
