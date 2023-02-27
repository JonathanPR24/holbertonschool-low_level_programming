#include "main.h"

/**
 * swap_int - swaps the values of two intergers in a function
 *
 * @a: this is the first entry
 *
 * @b: this is the second entry
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
