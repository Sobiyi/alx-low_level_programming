#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: a pointer to the array
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1]  = c;
	}
}
