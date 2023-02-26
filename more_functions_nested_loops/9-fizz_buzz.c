#include <stdio.h>

/**
 * main - function that prints the FizzBuzz sequence from 1 to 100.
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d ", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		i++;
	}
	printf("\n");

	return (0);
}
