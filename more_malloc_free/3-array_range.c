#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: the minimum integer value in the array
 * @max: the maximum integer value in the array
 *
 * Return: pointer to the newly created array, or NULL if
 * min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		arr[i] = min++;
		i++;
	}

	return (arr);
}
