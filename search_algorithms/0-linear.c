#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Description: This function searches for a value in the given array
 * using the linear search algorithm. It iterates through each element
 * of the array and compares it with the target value.
 *
 * Return: If the value is found, the function returns the index of the
 * first occurrence. If the value is not present in the array or if the
 * array is NULL, the function returns -1.
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}

	return (-1);
}
