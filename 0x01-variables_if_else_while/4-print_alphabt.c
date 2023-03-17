#include <stdio.h>
/**
 *main - Entry point
 *Description: Print all letters of the alphabet except q and e
 *Return: 0 always
 */
int main(void)
{
	int n;

	n = 97;
	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
		}
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
