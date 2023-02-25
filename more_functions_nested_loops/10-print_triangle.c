#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters of a given size
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)  /* If size is 0 or less, print a new line and return */
	{
		_putchar('\n');
		return;
	}

	/* Print the triangle */
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
