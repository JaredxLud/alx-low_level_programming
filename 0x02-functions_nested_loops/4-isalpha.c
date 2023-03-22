#include "main.h"
/**
 * _isalpha - shows l if the input is a
 *letter another cases, shows 0
 *
 *@c: The character in ASCII code
 *
 * Return: l for letters, 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
