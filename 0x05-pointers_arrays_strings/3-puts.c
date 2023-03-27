#include "main.h"
/**
 * _puts - Print string to stdout
 * @str: the string
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
