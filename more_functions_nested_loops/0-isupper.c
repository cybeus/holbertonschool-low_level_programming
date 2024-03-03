#include "main.h"
/**
 * _isupper - Entry point
 * @c:var
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c < 90 && c > 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
