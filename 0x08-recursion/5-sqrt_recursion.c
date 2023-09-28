#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number.
 * @n: the num.
 * Return: square root of n.
 */

int _sqrt_recursion_no_loops(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int mid = (n + 1) / 2;
		int square = mid * mid;
		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return _sqrt_recursion_no_loops(n - square);
		}
		else
		{
			return (_sqrt_recursion_no_loops(mid - 1));
		}
	}
}

