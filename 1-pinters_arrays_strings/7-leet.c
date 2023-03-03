#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet_arr[5][2] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '0'},
		{'t', '7'},
		{'l', '1'}
	};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_arr[j][0] ||
					str[i] == leet_arr[j][0] - 32)
			{
				str[i] = leet_arr[j][1];
			}
		}
	}

	return (str);
}
