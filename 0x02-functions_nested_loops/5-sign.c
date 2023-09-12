#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * @n: the checked integer.
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is 0 and  -1 and prints -
 * if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
