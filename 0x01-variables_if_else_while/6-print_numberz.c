#include <stdio.h>
/**
 *main - Entry point
 *Descrption: Print one to ten usinf putchar
 *Return: 0 always
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
