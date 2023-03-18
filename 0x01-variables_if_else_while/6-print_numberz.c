#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print number of base 10 using putchar'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
