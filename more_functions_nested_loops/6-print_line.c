#include "main.h"

/**
 * print_line - prints a straight line of '_' characters in the terminal
 *
 * @n: number of times '_' character should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
