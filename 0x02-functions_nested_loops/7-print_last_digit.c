#include "main.h"
/**
 * print_last_digit - Print last digit of numbers
 * @i: The given integer
 * Return: 0
 */
int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		j = j * -1;
	}
	_putchar(j + '0');
	return (j);
}
