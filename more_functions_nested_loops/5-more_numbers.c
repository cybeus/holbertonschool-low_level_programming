#include "main.h"
/**
 * more_numbers - Entry point
 * @i var;
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; c < 10 ; i++)
	{
		for (c = 48; c < 58; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
