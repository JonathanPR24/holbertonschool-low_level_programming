#include "main.h"

/**
 * sqrt_helper - Calculates the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 * @i: The current guess of the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
