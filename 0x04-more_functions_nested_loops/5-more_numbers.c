#include "main.h"
/**
 * more_numbers - Display zero to fourteen ten times
 * Return: 0
 */
void more_numbers(void)
{
	int i, k = 1;

	while (k <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		k++;
	}
}
