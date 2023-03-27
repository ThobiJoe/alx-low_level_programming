#include "main.h"
/**
 * swap_int - Swap the c=values of integers
 * @a: First integer
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
