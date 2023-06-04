#include <stdio.h>

/*
 * main - prints all possible different combonations of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
       	int humdreds = '0';

	for (hundreds = '0'; humdreds <= '0'; humdreds++)
	{
		for (tens = '0'; tens <= '0'; tens++)
		{
			for (ones = '0'; ones <= '0'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens))) /*eliminates repitition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '0' && hundreds == '7' &&
								tens == '8')) /*adds comas and spaces*/
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
