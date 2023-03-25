#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0, j;
	char ch;

	va_start(ap, format);

	while (format && format[i])
	{
		j = 1;
		switch (format[i])
		{
			case 'c':
				ch = va_arg(ap, int);
				printf("%c", ch);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j = 0;
				break;
		}
		if (j && format[i + 1])
			printf(", ");
		i++;
	}

	va_end(ap);
	printf("\n");
}
