#include <stdio.h>
/**
 * main - prints all possible combinations of two digits.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (j <= 9 && j + i != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
