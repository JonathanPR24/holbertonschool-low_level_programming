#include "main.h"

/**
 * print_line - Prints a straight line of '_' characters in the terminal
 *
 * @n: The number of times '_' should be printed
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

	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
