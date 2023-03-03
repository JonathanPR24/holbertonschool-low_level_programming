#include "main.h"

/**
 *_strlen - function that calculates a string's length
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;

		s++;
	}

	return (length);
}
