#include <stdio.h>
/**
 *main - Entry point
 *Description: Print all comn=binatiion of numbers
 *Return: 0 always
 */
int main(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
