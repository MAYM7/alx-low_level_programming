#include "main.h"

/**
 * _isalpha - a function that checks for lowercase character.
 *
 * @c: the checked character.
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c >= 'Z');
}
