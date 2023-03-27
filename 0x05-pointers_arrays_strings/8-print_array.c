#include "main.h"
#include <stdio.h>
/**
 * print_array - print content of an array
 * @a: Array
 * @n: number of array element
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
