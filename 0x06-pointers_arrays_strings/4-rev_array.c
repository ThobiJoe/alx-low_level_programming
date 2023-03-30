#include "main.h"
/**
 * reverse_array - Reverse the content of an array
 * @a: The array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int j, k;

	for (j = 0; j < n; j++)
	{
		k = a[j];
		a[j] = a[n];
		a[n] = k;
	}
}
