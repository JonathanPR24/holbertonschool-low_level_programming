#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet ten times, and a new line.
 */
void print_alphabet_x10(void)
{
	char n;

	char i;

	for (n = 1; n <= 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
