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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
