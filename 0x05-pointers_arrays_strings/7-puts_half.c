#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: length
 */
void puts_half(char *str)
{
	int longi = 0;

	while (*str != '\0')
	{
		longi++;
		str++;
	}

	return (longi);
}
