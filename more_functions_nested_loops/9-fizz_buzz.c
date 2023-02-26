#include <stdio.h>

/**
 * main - function that prints the FizzBuzz sequence from 1 to 100.
 *
 * Return: Always 0 (successful)
 */

#include <stdio.h>

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", num);
		}
		if (num != 100)
		{
			putchar(' ');
		}

		num++;
	}

	printf("\n");

	return 0;
}

