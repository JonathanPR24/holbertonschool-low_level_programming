#include <stdio.h>

/**
 * main - prints all arguments recived
 * @argc: number of argumensts passed to the program
 * @argv: array of strings containing the argument
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
