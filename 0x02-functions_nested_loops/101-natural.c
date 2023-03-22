#include <stdio.h>
/**
 * main - Print sum of multiples
 * Return: 0
 */
int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j = j + i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
