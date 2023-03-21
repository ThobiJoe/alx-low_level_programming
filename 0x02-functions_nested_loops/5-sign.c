#include "main.h"
/**
 * print_sign - Entry point
 * Description: Check the sign and print
 * @n: Number to check
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
