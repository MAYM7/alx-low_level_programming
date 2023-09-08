#include <stdio.h>
/**
 * main - prints all possible combinations of two digits.
 *
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
