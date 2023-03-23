#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 (Success) or 98/99/100 (Error)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[
