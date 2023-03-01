#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * @s: The string to be converted
 *
 * Return: The converted integer
 */

int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}

	return (num * sign);
}
