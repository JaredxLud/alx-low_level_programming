#include "main.h"
/**
 * print_sign - determines if the input number
 * greater, iqual or less than zero
 *
 * @n: the input number as an integer.
 *
 * Return: l is greater than zero, 0 is zero.
 * -l is less then zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (l);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
