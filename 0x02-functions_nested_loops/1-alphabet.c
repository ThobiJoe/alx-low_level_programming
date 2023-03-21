#include "main.h"
/**
 * print alphabet - Entry Point
 * Description: Print a-z in lowercase
 * Return: 0 always
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
