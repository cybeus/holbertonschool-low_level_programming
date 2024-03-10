#include "main.h"
#include <stdio.h>

/**
 * _memcpy - etry point
 * @src: variable
 * @dest: variable
 * @n: variable
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	for (unsigned int i = 0; i < n; ++i)
	{
	*dest_ptr++ = *src_ptr++;
	}

	return (dest);
}
