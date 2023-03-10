#include <stdio.h>

/**
 * main - Prints the number of args
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: always zero
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
