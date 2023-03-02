#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: Where n is the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int d;
	int e;

	for (d = 0; d < n--; d++)
	{
		e = a[d];
		a[d] = a[n];
		a[n] = e;
	}
}

