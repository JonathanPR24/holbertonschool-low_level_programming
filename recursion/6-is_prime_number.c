#include "main.h"

/**
 * is_prime_helper - Check if a number is prime
 *
 * @n: The number to check for prime
 * @div: The current divisor to check if n is divisible by
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_helper(int n, int div)
{
	if (n < 2)
	{
		return (0);
	}
	if (div == n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - Check if a number is prime
 *
 * @n: The number to check for prime
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
