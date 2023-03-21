#include "main.h"
/**
 * print alphabet - Entry Point
 * Description: Print a-z in lowercase
 * Return: 0 always
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
