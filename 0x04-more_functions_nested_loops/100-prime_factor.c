#include <stdio.h>
#include <math.h>
/**
 * main - Get prime number
 * Return: 0
 */
int main(void)
{
	long i, j;
	long x = 612852475143;
	double y = sqrt(x);

	for (i = 1; i <= y; i++)
	{
		if (x % i == 0)
		{
			j = x / i;
		}
	}
	printf("%ld\n", j);
	return (0);
}
