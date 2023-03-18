#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabet lowercase and uppercase'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
