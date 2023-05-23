#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using Linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value,
 *         or -1 if not found or if the array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Checking array[%lu] = %d\n", i, array[i]);

		/* If the value is found, return the index */
		if (array[i] == value)
			return (i);
	}

	/* Value not found */
	return (-1);
}
