#include "main.h"
/**
 * factorial - Get actorial of a given number
 * @n: The number
 * Return: 0 or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
