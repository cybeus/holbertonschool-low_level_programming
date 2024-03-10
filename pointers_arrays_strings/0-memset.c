#include "main.h"
#include <stdio.h>

/**
 * _memset - etry point
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		i++;
		s[i] = b;
	}
	return (s);
}
