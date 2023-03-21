#include "main.h"
/**
 * times_table - Display 9 times table
 * Return: 9 times table
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 0; j++)
		{
			k = i * j;
			if (k > 9)
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(m - '0');
				_putchar(l - '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(k - '0');
			}
		}
		_putchar('\n)
	}
}
