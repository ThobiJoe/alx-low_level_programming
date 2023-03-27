#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: String to print
 * Return: nothing
 */
void print_rev(char *s)
{
	size_t length = strlen(s);
	int i;

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
