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
	unsigned int i;

	for (unsigned int i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}

	return (dest);
}
