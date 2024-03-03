#include "main.h"
/**
 * _isupper - Entry point
 * @c:var
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
