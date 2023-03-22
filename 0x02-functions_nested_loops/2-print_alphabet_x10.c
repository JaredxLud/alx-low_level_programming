#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			_putchar(j);
		}	
		_putchar('\n');
	}
}
