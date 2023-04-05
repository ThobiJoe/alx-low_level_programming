#include "main.h"
/**
 * _print_rev_recursion - Print revers in recursion
 * @s: The string
 * Return: Reverse String
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
