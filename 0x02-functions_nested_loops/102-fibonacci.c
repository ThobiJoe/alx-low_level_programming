#include <stdio.h>
/**
 * main - Print first 50 fib numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long j = 1;
	long k = 2;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%ld", j);
		}
		else if (i == 1)
		{
			printf(", %ld", k);
		}
		i++;
	}
	printf("\n");
	return (0);
}
