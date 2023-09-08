#include <stdio.h>
/**
 * main - prints all possible combinations of two two digits.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int j;
	int l;
	int g;

	for (l = 0; l < 10; l++)
	{
		for (g = 0; g < 10; g++)
		{
			for (i = 0; i < 10; i++)
			{
				for (j = i + 1; j < 10; j++)
				{
					putchar(l + '0');
					putchar(g + '0');
					putchar(' ');
					putchar(i + '0');
					putchar(j + '0');
					if (j <= 9 && l + g + j + i != 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
