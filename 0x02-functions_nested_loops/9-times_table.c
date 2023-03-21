#include "main.h"
/**
 * times_table - Display 9 times table
 * Return: 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
		}
		_putchar('\n');
	}
}