#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array to iterate over
 * @size: Number of elements in the array
 * @action: Pointer to the function to execute on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
