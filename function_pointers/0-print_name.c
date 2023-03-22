#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name to print
 * @f: pointer to a function that prints a string
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
