/**
 * File: 1-memcpy.c
 * Auth: Jared
 */

#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area poitned
 * 		to be @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointerto the destination buffer @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
