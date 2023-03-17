#include <stdio.h>
/**
 *main - Entry Point
 *Description: Print out alphabets in small case
 *Return: 0 always
 */
int main(void)
{
	int ch;

	ch = 97;
	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
