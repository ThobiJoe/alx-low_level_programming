#include <stdio.h>
/**
 *main - Entry point
 *Description: Print all base 16 numbers
 *Return: 0 always
 */
int main(void)
{
	int n = 48;
	int m = 65;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 70)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
