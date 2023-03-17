#include <stdio.h>
/**
 *main - Entry point
 *Descrption: Print one to ten
 *Return: 0 always
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
