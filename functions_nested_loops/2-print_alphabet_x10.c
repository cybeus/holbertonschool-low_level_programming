#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	char alhabet ;
	int i = 0;

	while (i < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');
	i++;
	}
}
