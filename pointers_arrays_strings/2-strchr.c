#include "main.h"
#include <stdio.h>
/**
 * *_strchr - prints buffer in hexa
 * @s: var
 * @c: var
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
